#-------------------------------------------------
#
# Project created by QtCreator 2018-02-15T18:43:17
#
#-------------------------------------------------

QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bulkproject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    dbmanager.cpp \
    user.cpp \
    loginmanager.cpp \
    loginwindow.cpp \
    employeetable.cpp \
    deleteemployee.cpp \
    editemployee.cpp \
    addemployee.cpp \
    menuAdministrator.cpp \
    menuManager.cpp

HEADERS += \
    dbmanager.h \
    constants.h \
    loginmanager.h \
    user.h \
    loginwindow.h \
    employeetable.h \
    deleteemployee.h \
    editemployee.h \
    addemployee.h \
    menuAdministrator.h \
    menuManager.h

FORMS += \
    loginwindow.ui \
    deleteemployee.ui \
    editemployee.ui \
    addemployee.ui \
    menuAdministrator.ui \
    menuManager.ui

RESOURCES +=