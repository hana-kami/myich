#-------------------------------------------------
#
# Project created by QtCreator 2022-09-17T14:31:25
#
#-------------------------------------------------

QT       += core gui
QT	+= multimedia
CONFIG += resources_big
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DESTDIR = $$PWD/bin
RC_ICONS = $$PWD/bin/images/favicon.ico

TARGET = myich
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        allwidget.cpp \
    searchform.cpp \
    searchitem.cpp \
    picturewidget.cpp \
    picturebutton.cpp \
    pictureview.cpp \
    pictureitem.cpp \
    musicform.cpp \
    messageitem.cpp \
    messageform.cpp

HEADERS += \
        allwidget.h \
    loadfileqss.h \
    searchform.h \
    searchitem.h \
    picturewidget.h \
    picturebutton.h \
    pictureview.h \
    pictureitem.h \
    musicform.h \
    messageitem.h \
    messageform.h


FORMS += \
        allwidget.ui \
    searchform.ui \
    searchitem.ui \
    picturewidget.ui \
    musicform.ui \
    messageitem.ui \
    messageform.ui


RESOURCES += \
    res.qrc \


