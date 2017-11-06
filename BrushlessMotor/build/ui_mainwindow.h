/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_TransToEnglish;
    QAction *action_TransToChinese;
    QAction *action_SetSerial;
    QAction *action_Exit;
    QAction *action_OpenScope;
    QAction *action_CreateModel;
    QAction *action_ControlPanel;
    QAction *action_BasicSetup;
    QAction *action_ErrorLog;
    QAction *action_AutoPhase;
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *line;
    QGroupBox *groupBox;
    QPushButton *pushbutton_MotorFeedback;
    QPushButton *pushbutton_IO;
    QPushButton *pushbutton_CurrentLoop;
    QPushButton *pushbutton_CVM;
    QPushButton *pushbutton_IO_3;
    QPushButton *pushbutton_IO_4;
    QPushButton *pushbutton_IO_5;
    QTreeWidget *treewidget_ServoMotor;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_ID;
    QLabel *label_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_language;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(782, 485);
        action_TransToEnglish = new QAction(MainWindow);
        action_TransToEnglish->setObjectName(QStringLiteral("action_TransToEnglish"));
        action_TransToEnglish->setCheckable(true);
        action_TransToChinese = new QAction(MainWindow);
        action_TransToChinese->setObjectName(QStringLiteral("action_TransToChinese"));
        action_TransToChinese->setCheckable(true);
        action_TransToChinese->setChecked(true);
        action_SetSerial = new QAction(MainWindow);
        action_SetSerial->setObjectName(QStringLiteral("action_SetSerial"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_OpenScope = new QAction(MainWindow);
        action_OpenScope->setObjectName(QStringLiteral("action_OpenScope"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/scope.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_OpenScope->setIcon(icon);
        action_CreateModel = new QAction(MainWindow);
        action_CreateModel->setObjectName(QStringLiteral("action_CreateModel"));
        action_ControlPanel = new QAction(MainWindow);
        action_ControlPanel->setObjectName(QStringLiteral("action_ControlPanel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/control_panel.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ControlPanel->setIcon(icon1);
        action_BasicSetup = new QAction(MainWindow);
        action_BasicSetup->setObjectName(QStringLiteral("action_BasicSetup"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_BasicSetup->setIcon(icon2);
        action_ErrorLog = new QAction(MainWindow);
        action_ErrorLog->setObjectName(QStringLiteral("action_ErrorLog"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/error_log.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ErrorLog->setIcon(icon3);
        action_AutoPhase = new QAction(MainWindow);
        action_AutoPhase->setObjectName(QStringLiteral("action_AutoPhase"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/phase.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_AutoPhase->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 330, 75, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 330, 75, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(240, 0, 20, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 60, 471, 201));
        pushbutton_MotorFeedback = new QPushButton(groupBox);
        pushbutton_MotorFeedback->setObjectName(QStringLiteral("pushbutton_MotorFeedback"));
        pushbutton_MotorFeedback->setGeometry(QRect(340, 140, 130, 40));
        pushbutton_IO = new QPushButton(groupBox);
        pushbutton_IO->setObjectName(QStringLiteral("pushbutton_IO"));
        pushbutton_IO->setGeometry(QRect(10, 20, 130, 40));
        pushbutton_CurrentLoop = new QPushButton(groupBox);
        pushbutton_CurrentLoop->setObjectName(QStringLiteral("pushbutton_CurrentLoop"));
        pushbutton_CurrentLoop->setGeometry(QRect(280, 140, 50, 40));
        pushbutton_CVM = new QPushButton(groupBox);
        pushbutton_CVM->setObjectName(QStringLiteral("pushbutton_CVM"));
        pushbutton_CVM->setGeometry(QRect(10, 80, 130, 40));
        pushbutton_IO_3 = new QPushButton(groupBox);
        pushbutton_IO_3->setObjectName(QStringLiteral("pushbutton_IO_3"));
        pushbutton_IO_3->setGeometry(QRect(10, 140, 130, 40));
        pushbutton_IO_4 = new QPushButton(groupBox);
        pushbutton_IO_4->setObjectName(QStringLiteral("pushbutton_IO_4"));
        pushbutton_IO_4->setGeometry(QRect(160, 140, 50, 40));
        pushbutton_IO_5 = new QPushButton(groupBox);
        pushbutton_IO_5->setObjectName(QStringLiteral("pushbutton_IO_5"));
        pushbutton_IO_5->setGeometry(QRect(220, 140, 50, 40));
        treewidget_ServoMotor = new QTreeWidget(centralWidget);
        treewidget_ServoMotor->setObjectName(QStringLiteral("treewidget_ServoMotor"));
        treewidget_ServoMotor->setGeometry(QRect(10, 0, 221, 261));
        treewidget_ServoMotor->setContextMenuPolicy(Qt::CustomContextMenu);
        treewidget_ServoMotor->setFrameShape(QFrame::StyledPanel);
        treewidget_ServoMotor->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 10, 54, 12));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 10, 54, 12));
        label_4->setOpenExternalLinks(false);
        label_ID = new QLabel(centralWidget);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        label_ID->setGeometry(QRect(360, 10, 54, 12));
        label_ID->setAutoFillBackground(false);
        label_ID->setStyleSheet(QStringLiteral("background-color: rgb(222, 255, 226);"));
        label_ID->setFrameShadow(QFrame::Plain);
        label_ID->setTextFormat(Qt::AutoText);
        label_ID->setScaledContents(false);
        label_ID->setOpenExternalLinks(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(300, 10, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 782, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_language = new QMenu(menu);
        menu_language->setObjectName(QStringLiteral("menu_language"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action_CreateModel);
        menu->addAction(menu_language->menuAction());
        menu->addAction(action_SetSerial);
        menu->addSeparator();
        menu->addAction(action_Exit);
        menu_language->addAction(action_TransToEnglish);
        menu_language->addAction(action_TransToChinese);
        menu_2->addAction(action_OpenScope);
        menu_2->addAction(action_ControlPanel);
        menu_2->addAction(action_BasicSetup);
        menu_2->addAction(action_ErrorLog);
        menu_2->addAction(action_AutoPhase);
        mainToolBar->addAction(action_BasicSetup);
        mainToolBar->addAction(action_ControlPanel);
        mainToolBar->addAction(action_AutoPhase);
        mainToolBar->addAction(action_OpenScope);
        mainToolBar->addAction(action_ErrorLog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_TransToEnglish->setText(QApplication::translate("MainWindow", "English", 0));
        action_TransToChinese->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", 0));
        action_SetSerial->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        action_OpenScope->setText(QApplication::translate("MainWindow", "\347\244\272\346\263\242\345\231\250", 0));
        action_CreateModel->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\250\241\345\236\213", 0));
        action_ControlPanel->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\351\235\242\346\235\277", 0));
        action_BasicSetup->setText(QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\256\276\347\275\256", 0));
        action_ErrorLog->setText(QApplication::translate("MainWindow", "\351\224\231\350\257\257\346\227\245\345\277\227", 0));
        action_AutoPhase->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\351\211\264\345\220\221", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "<\351\251\261\345\212\250\345\231\250\345\220\215\345\255\227>", 0));
        pushbutton_MotorFeedback->setText(QApplication::translate("MainWindow", "Motor/Feedback", 0));
        pushbutton_IO->setText(QApplication::translate("MainWindow", "Input/Output", 0));
        pushbutton_CurrentLoop->setText(QApplication::translate("MainWindow", "I Loop", 0));
        pushbutton_CVM->setText(QApplication::translate("MainWindow", "CVM Control Program", 0));
        pushbutton_IO_3->setText(QApplication::translate("MainWindow", "CAN Configuration", 0));
        pushbutton_IO_4->setText(QApplication::translate("MainWindow", "P Loop", 0));
        pushbutton_IO_5->setText(QApplication::translate("MainWindow", "V Loop", 0));
        QTreeWidgetItem *___qtreewidgetitem = treewidget_ServoMotor->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\351\241\271\347\233\256", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\234\252\346\211\223\345\274\200", 0));
        label_ID->setText(QApplication::translate("MainWindow", "\346\224\271\345\217\230\350\203\214\346\231\257", 0));
        label_6->setText(QApplication::translate("MainWindow", "\351\251\261\345\212\250\345\231\250ID\357\274\232", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_language->setTitle(QApplication::translate("MainWindow", "\350\257\255\350\250\200", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
