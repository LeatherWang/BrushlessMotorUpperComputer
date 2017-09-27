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
    QAction *action_serial;
    QAction *action_exit;
    QAction *action_OpenScope;
    QAction *action_NewModel;
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *line;
    QGroupBox *groupBox;
    QPushButton *pushbutton_MotorFeedback;
    QPushButton *pushbutton_IO;
    QPushButton *pushbutton_I_loop;
    QPushButton *pushbutton_CVM;
    QPushButton *pushbutton_IO_3;
    QPushButton *pushbutton_IO_4;
    QPushButton *pushbutton_IO_5;
    QTreeWidget *treeWidget_Brushless;
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
        action_serial = new QAction(MainWindow);
        action_serial->setObjectName(QStringLiteral("action_serial"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        action_OpenScope = new QAction(MainWindow);
        action_OpenScope->setObjectName(QStringLiteral("action_OpenScope"));
        action_NewModel = new QAction(MainWindow);
        action_NewModel->setObjectName(QStringLiteral("action_NewModel"));
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
        pushbutton_I_loop = new QPushButton(groupBox);
        pushbutton_I_loop->setObjectName(QStringLiteral("pushbutton_I_loop"));
        pushbutton_I_loop->setGeometry(QRect(280, 140, 50, 40));
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
        treeWidget_Brushless = new QTreeWidget(centralWidget);
        treeWidget_Brushless->setObjectName(QStringLiteral("treeWidget_Brushless"));
        treeWidget_Brushless->setGeometry(QRect(10, 0, 221, 261));
        treeWidget_Brushless->setContextMenuPolicy(Qt::CustomContextMenu);
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
        menu->addAction(action_NewModel);
        menu->addAction(menu_language->menuAction());
        menu->addAction(action_serial);
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_language->addAction(action_TransToEnglish);
        menu_language->addAction(action_TransToChinese);
        menu_2->addAction(action_OpenScope);
        mainToolBar->addAction(action_OpenScope);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_TransToEnglish->setText(QApplication::translate("MainWindow", "English", 0));
        action_TransToChinese->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", 0));
        action_serial->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", 0));
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        action_OpenScope->setText(QApplication::translate("MainWindow", "\347\244\272\346\263\242\345\231\250", 0));
        action_NewModel->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\250\241\345\236\213", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "<\351\251\261\345\212\250\345\231\250\345\220\215\345\255\227>", 0));
        pushbutton_MotorFeedback->setText(QApplication::translate("MainWindow", "Motor/Feedback", 0));
        pushbutton_IO->setText(QApplication::translate("MainWindow", "Input/Output", 0));
        pushbutton_I_loop->setText(QApplication::translate("MainWindow", "I Loop", 0));
        pushbutton_CVM->setText(QApplication::translate("MainWindow", "CVM Control Program", 0));
        pushbutton_IO_3->setText(QApplication::translate("MainWindow", "CAN Configuration", 0));
        pushbutton_IO_4->setText(QApplication::translate("MainWindow", "P Loop", 0));
        pushbutton_IO_5->setText(QApplication::translate("MainWindow", "V Loop", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_Brushless->headerItem();
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
