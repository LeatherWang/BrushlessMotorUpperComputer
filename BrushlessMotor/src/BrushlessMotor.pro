#-------------------------------------------------
#
# Project created by QtCreator 2017-09-23T08:44:38
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += C++11

TARGET = BrushlessMotor
TEMPLATE = app

TRANSLATIONS = BlessM_zh_CN.ts \
               BlessM_en_CN.ts

RESOURCES += \
    image.qrc

INCLUDEPATH +=BasicSetup\
    LoopPanels\
    MainWindow\
    ScopePanel

SOURCES += \
    main.cpp \
    LoopPanels/current_loop.cpp \
    MainWindow/mainwindow.cpp \
    MainWindow/ui_init.cpp \
    ScopePanel/scope.cpp \
    MainWindow/language.cpp \
    BasicSetup/basicsetupwizard.cpp \
    LoopPanels/motorfeedback.cpp \
    BasicSetup/basicsetupdriver.cpp \
    BasicSetup/amplifierconstants.cpp \
    MainWindow/treewidget.cpp

FORMS += \
    LoopPanels/current_loop.ui \
    MainWindow/mainwindow.ui \
    ScopePanel/scope.ui \
    BasicSetup/basicsetupwizard.ui \
    LoopPanels/motorfeedback.ui

HEADERS += \
    LoopPanels/current_loop.h \
    MainWindow/mainwindow.h \
    ScopePanel/scope.h \
    BasicSetup/basicsetupwizard.h \
    LoopPanels/motorfeedback.h \
    BasicSetup/basicsetupdriver.h \
    BasicSetup/amplifierconstants.h

DISTFILES += \
    ../doc/README.txt






