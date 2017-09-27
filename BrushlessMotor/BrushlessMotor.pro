#-------------------------------------------------
#
# Project created by QtCreator 2017-09-23T08:44:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BrushlessMotor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    language_translate.cpp \
    init_mainwindows.cpp \
    scope.cpp \
    basicsetup.cpp \
    treewidght.cpp \
    wizard_setting.cpp \
    i_loopsetting.cpp \
    motorfeedback.cpp

HEADERS  += mainwindow.h \
    scope.h \
    basicsetup.h \
    wizard_setting.h \
    i_loopsetting.h \
    motorfeedback.h

FORMS    += mainwindow.ui \
    scope.ui \
    basicsetup.ui \
    wizard_setting.ui \
    i_loopsetting.ui \
    motorfeedback.ui

TRANSLATIONS = BlessM_zh_CN.ts \
               BlessM_en_CN.ts

DISTFILES += \
    README.txt

RESOURCES += \
    image.qrc


