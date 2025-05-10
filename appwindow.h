#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QByteArray>
#include <QVBoxLayout>
#include <QString>
#include <QPushButton>
class appwindow : public QWidget {
    Q_OBJECT

public:
   explicit appwindow(const QString &username, QWidget *parent = nullptr);
     QString loggedInUsername;
private:
    QPushButton* createFlatButton(const QString &text);
    void setLoggedInUsername(const QString &username);
    void addFriend(const QString &friendUsername);

    QVBoxLayout *feedLayout;
    QVBoxLayout *userListLayout;
    QByteArray attachedImageData;
    QLabel* attachedImagePreview;
   // QLineEdit *searchBar;

};

#endif // APPWINDOW_H
