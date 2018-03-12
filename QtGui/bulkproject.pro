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
    salesinfo.cpp \
    menu.cpp \
    newsales.cpp \
    dbmanager.cpp \
    user.cpp \
    loginmanager.cpp \
    employeemanager.cpp \
    loginwindow.cpp \
    employeetable.cpp \
<<<<<<< HEAD
    newtable.cpp
=======
    newmenu.cpp \
    deleteemployee.cpp \
    addMember.cpp \
    editemployee.cpp
>>>>>>> 086451568f83b1c9862a214df4333cbd1b8f99dc

HEADERS += \
    salesinfo.h \
    menu.h \
    newsales.h \
    dbmanager.h \
    constants.h \
    loginmanager.h \
    user.h \
    employeemanager.h \
    loginwindow.h \
    employeetable.h \
<<<<<<< HEAD
    newtable.h
=======
    newmenu.h \
    deleteemployee.h \
    addMember.h \
    editemployee.h
>>>>>>> 086451568f83b1c9862a214df4333cbd1b8f99dc

FORMS += \
    loginwindow.ui \
    menu.ui \
    newsales.ui \
    employeemanager.ui \
<<<<<<< HEAD
    newtable.ui
=======
    newmenu.ui \
    addmember.ui \
    deleteemployee.ui \
    editemployee.ui
>>>>>>> 086451568f83b1c9862a214df4333cbd1b8f99dc

RESOURCES += \
    menupicture.qrc
