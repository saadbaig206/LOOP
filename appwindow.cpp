// appwindow.cpp
#include "appwindow.h"
#include "database.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QLineEdit>
#include <QFrame>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFileDialog>
#include <QBuffer>

appwindow::appwindow(const QString &username, QWidget *parent) : QWidget(parent), loggedInUsername(username) {
    qDebug() << "Logged in as:" << loggedInUsername;
    this->setWindowTitle("Loop");
    this->resize(1100, 650);
    this->setStyleSheet("font-family: 'Segoe UI'; font-size: 13px; background-color: #fafafa;");

    QLabel *logo = new QLabel("\U0001F310 LOOP");
    logo->setStyleSheet("font-weight: bold; font-size: 20px;");

    QLineEdit *searchBar = new QLineEdit;
    searchBar->setPlaceholderText("Search...");
    searchBar->setStyleSheet("padding: 6px; border: 1px solid #ccc; border-radius: 6px;");

    QPushButton *searchBtn = new QPushButton("🔍");

    QPushButton *notifButton = createFlatButton("\U0001F514");
    QPushButton *msgButton = createFlatButton("\U0001F4AC");
    QPushButton *profileButton = createFlatButton("\U0001F9D1");

    QHBoxLayout *topBarLayout = new QHBoxLayout;
    topBarLayout->addWidget(logo);
    topBarLayout->addStretch();
    topBarLayout->addWidget(searchBar,2);
    topBarLayout->addWidget(searchBtn);
    topBarLayout->addWidget(notifButton);
    topBarLayout->addWidget(msgButton);
    topBarLayout->addWidget(profileButton);

    // Sidebar
    QVBoxLayout *leftSidebarLayout = new QVBoxLayout;
    QStringList menuItems = {"\U0001F3E0 Home", "\U0001F464 Profile", "\U0001F465 Friends", "\U0001F4AC Messages", "\U0001F514 Notifications", "⚙️ Settings", "\U0001F6AA Logout"};
    for (const QString &item : menuItems) {
        leftSidebarLayout->addWidget(createFlatButton(item));
    }
    leftSidebarLayout->addStretch();

    // Post input and image
    QTextEdit *postInput = new QTextEdit;
    postInput->setPlaceholderText("What's on your mind?");
    QPushButton *attachBtn = createFlatButton("\U0001F4CE Attach Image");
    QPushButton *postBtn = createFlatButton("Post");
    postBtn->setStyleSheet(postBtn->styleSheet() + "background-color: #0078d7; color: white;");

    attachedImagePreview = new QLabel;
    attachedImagePreview->setFixedHeight(150);
    attachedImagePreview->setScaledContents(true);
    attachedImagePreview->setVisible(false);

    QHBoxLayout *postBtnLayout = new QHBoxLayout;
    postBtnLayout->addWidget(attachBtn);
    postBtnLayout->addWidget(postBtn);

    QVBoxLayout *postCreateLayout = new QVBoxLayout;
    postCreateLayout->addWidget(postInput);
    postCreateLayout->addWidget(attachedImagePreview);
    postCreateLayout->addLayout(postBtnLayout);

    QWidget *feedWidget = new QWidget;
    feedLayout = new QVBoxLayout(feedWidget);
    feedLayout->setSpacing(15);
    feedLayout->addStretch();

    QScrollArea *feedScroll = new QScrollArea;
    feedScroll->setWidget(feedWidget);
    feedScroll->setWidgetResizable(true);

    QVBoxLayout *centerLayout = new QVBoxLayout;
    centerLayout->addLayout(postCreateLayout);
    centerLayout->addWidget(feedScroll);

    // Right sidebar for search results
    QVBoxLayout *rightSidebarLayout = new QVBoxLayout;
    QLabel *searchResultsLabel = new QLabel("Search Results:");
    searchResultsLabel->setStyleSheet("font-weight: bold; margin-bottom: 10px;");
    rightSidebarLayout->addWidget(searchResultsLabel);

    userListLayout = new QVBoxLayout;
    rightSidebarLayout->addLayout(userListLayout);
    rightSidebarLayout->addStretch();

    QHBoxLayout *mainContentLayout = new QHBoxLayout;
    mainContentLayout->addLayout(leftSidebarLayout, 1);
    mainContentLayout->addLayout(centerLayout, 3);
    mainContentLayout->addLayout(rightSidebarLayout, 1);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(topBarLayout);
    mainLayout->addSpacing(10);
    mainLayout->addLayout(mainContentLayout);

    QSqlDatabase db = Database::connectDB();

    QSqlQuery createQuery;
    createQuery.exec("CREATE TABLE IF NOT EXISTS posts (id INTEGER PRIMARY KEY AUTOINCREMENT, content TEXT, image BLOB, author TEXT, timestamp DATETIME DEFAULT CURRENT_TIMESTAMP)");
    createQuery.exec("CREATE TABLE IF NOT EXISTS friends (user1 TEXT, user2 TEXT)");



    // added for testing
    createQuery.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY)"); // ← Add this if not already

    connect(postBtn, &QPushButton::clicked, [=]() {
        QString content = postInput->toPlainText();
        if (!content.isEmpty()) {
            // QLabel *newPost = new QLabel("\U0001F9D1 You:\n" + content);
            // newPost->setWordWrap(true);
            // feedLayout->insertWidget(0, newPost);


            QWidget *postWidget = new QWidget;
            QVBoxLayout *postLayout = new QVBoxLayout(postWidget);

            QLabel *contentLabel = new QLabel("\U0001F9D1 You:\n" + content);
            contentLabel->setWordWrap(true);
            postLayout->addWidget(contentLabel);

            if (!attachedImageData.isEmpty()) {
                QPixmap image;
                image.loadFromData(attachedImageData);
                QLabel *imageLabel = new QLabel;
                imageLabel->setPixmap(image);
                imageLabel->setScaledContents(true);
                imageLabel->setFixedHeight(150);
                postLayout->addWidget(imageLabel);
            }

            feedLayout->insertWidget(0, postWidget);

            QSqlQuery query;
            query.prepare("INSERT INTO posts (content, author, image) VALUES (:content, :author, :image)");
            query.bindValue(":content", content);
            query.bindValue(":author", loggedInUsername);
            query.bindValue(":image", attachedImageData);

            if (!query.exec()) {
                qDebug() << "Failed to insert post:" << query.lastError();
            }

            postInput->clear();
            attachedImagePreview->clear();
            attachedImagePreview->setVisible(false);
            attachedImageData.clear();
        }
    });

    connect(attachBtn, &QPushButton::clicked, this, [=]() {
        QString filePath = QFileDialog::getOpenFileName(this, "Select a Photo", "", "Images (*.png *.jpg *.jpeg *.bmp)");
        if (!filePath.isEmpty()) {
            QPixmap pixmap(filePath);
            attachedImagePreview->setPixmap(pixmap);
            attachedImagePreview->setVisible(true);

            QByteArray byteArray;
            QBuffer buffer(&byteArray);
            buffer.open(QIODevice::WriteOnly);
            pixmap.save(&buffer, "PNG");
            attachedImageData = byteArray;
        }
    });

    connect(searchBtn, &QPushButton::clicked, this, [=]() {
        QLayoutItem *child;
        while ((child = userListLayout->takeAt(0)) != nullptr) {
            delete child->widget();
            delete child;
        }

        QSqlQuery query;
        query.prepare(R"(
            SELECT username FROM users
            WHERE username != :username
            AND username NOT IN (
                SELECT user2 FROM friends WHERE user1 = :username
            )
        )");
        query.bindValue(":username", loggedInUsername);
        query.exec();

        while (query.next()) {
            QString username = query.value(0).toString();
            QWidget *userRow = new QWidget;
            QHBoxLayout *rowLayout = new QHBoxLayout(userRow);
            QLabel *nameLabel = new QLabel(username);
            QPushButton *addBtn = new QPushButton("+");
            connect(addBtn, &QPushButton::clicked, this, [=]() {
                addFriend(username);
            });
            rowLayout->addWidget(nameLabel);
            rowLayout->addStretch();
            rowLayout->addWidget(addBtn);
            userListLayout->addWidget(userRow);
        }
    });
}




QPushButton* appwindow::createFlatButton(const QString &text) {
    QPushButton *button = new QPushButton(text);
    button->setFlat(true);
    button->setStyleSheet("QPushButton { border: none; padding: 6px; }");
    return button;
}
void appwindow::addFriend(const QString &friendUsername) {
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT * FROM friends WHERE user1 = :user1 AND user2 = :user2");
    checkQuery.bindValue(":user1", loggedInUsername);
    checkQuery.bindValue(":user2", friendUsername);

    if (checkQuery.exec() && checkQuery.next()) {
        qDebug() << "Already friends.";
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO friends (user1, user2) VALUES (:user1, :user2)");
    query.bindValue(":user1", loggedInUsername);
    query.bindValue(":user2", friendUsername);

    if (query.exec()) {
        qDebug() << "Friend added.";
    } else {
        qDebug() << "Error adding friend:" << query.lastError().text();
    }    
}
