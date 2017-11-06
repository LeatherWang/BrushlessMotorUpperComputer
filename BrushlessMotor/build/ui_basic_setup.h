/********************************************************************************
** Form generated from reading UI file 'basic_setup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_SETUP_H
#define UI_BASIC_SETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_basic_setup
{
public:
    QPushButton *pushButton_ChangeSetting;
    QPushButton *pushButton_LoadSettingFile;
    QPushButton *pushButton_Cancle;

    void setupUi(QWidget *basic_setup)
    {
        if (basic_setup->objectName().isEmpty())
            basic_setup->setObjectName(QStringLiteral("basic_setup"));
        basic_setup->resize(501, 416);
        pushButton_ChangeSetting = new QPushButton(basic_setup);
        pushButton_ChangeSetting->setObjectName(QStringLiteral("pushButton_ChangeSetting"));
        pushButton_ChangeSetting->setGeometry(QRect(10, 380, 75, 23));
        pushButton_LoadSettingFile = new QPushButton(basic_setup);
        pushButton_LoadSettingFile->setObjectName(QStringLiteral("pushButton_LoadSettingFile"));
        pushButton_LoadSettingFile->setGeometry(QRect(120, 380, 91, 23));
        pushButton_Cancle = new QPushButton(basic_setup);
        pushButton_Cancle->setObjectName(QStringLiteral("pushButton_Cancle"));
        pushButton_Cancle->setGeometry(QRect(360, 380, 75, 23));

        retranslateUi(basic_setup);

        QMetaObject::connectSlotsByName(basic_setup);
    } // setupUi

    void retranslateUi(QWidget *basic_setup)
    {
        basic_setup->setWindowTitle(QApplication::translate("basic_setup", "Form", 0));
        pushButton_ChangeSetting->setText(QApplication::translate("basic_setup", "\346\233\264\346\224\271\350\256\276\347\275\256", 0));
        pushButton_LoadSettingFile->setText(QApplication::translate("basic_setup", "\345\212\240\350\275\275\351\205\215\347\275\256\346\226\207\344\273\266", 0));
        pushButton_Cancle->setText(QApplication::translate("basic_setup", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class basic_setup: public Ui_basic_setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_SETUP_H
