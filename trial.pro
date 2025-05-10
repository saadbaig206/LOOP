QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appwindow.cpp \
    database.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    signupwindow.cpp

HEADERS += \
    appwindow.h \
    database.h \
    loginwindow.h \
    mainwindow.h \
    signupwindow.h

FORMS += \
    appwindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    signupwindow.ui

TARGET = SocialMediaApp  # This defines the name of your executable

# Default rules for deployment.
# If not deploying to specific platform, remove these lines
# qnx: target.path = /tmp/$${TARGET}/bin
# else: unix:!android: target.path = /opt/$${TARGET}/bin
# !isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

