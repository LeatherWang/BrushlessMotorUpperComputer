/********************************************************************************
** Form generated from reading UI file 'wizard_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_SETTING_H
#define UI_WIZARD_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_Wizard_Setting
{
public:
    QWizardPage *wizardPage1;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox_brushlessID;
    QLineEdit *lineEdit_modelName;
    QLabel *label_6;
    QWizardPage *wizardPage2;
    QLabel *label_2;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_7;
    QRadioButton *radioButton_4;
    QWizardPage *wizardPage;
    QLabel *label_8;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QCheckBox *checkBox;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QLabel *label_11;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QCheckBox *checkBox_2;
    QWizardPage *wizardPage_2;
    QLabel *label_12;
    QComboBox *comboBox_4;
    QLabel *label_13;
    QComboBox *comboBox_5;
    QLabel *label_14;
    QGroupBox *groupBox;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QWizardPage *wizardPage_3;
    QLabel *label_15;
    QLabel *label_16;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QLabel *label_17;
    QComboBox *comboBox_6;

    void setupUi(QWizard *Wizard_Setting)
    {
        if (Wizard_Setting->objectName().isEmpty())
            Wizard_Setting->setObjectName(QStringLiteral("Wizard_Setting"));
        Wizard_Setting->setEnabled(true);
        Wizard_Setting->resize(500, 360);
        Wizard_Setting->setWizardStyle(QWizard::ModernStyle);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 100, 54, 12));
        label_4 = new QLabel(wizardPage1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 140, 61, 20));
        comboBox_brushlessID = new QComboBox(wizardPage1);
        comboBox_brushlessID->setObjectName(QStringLiteral("comboBox_brushlessID"));
        comboBox_brushlessID->setGeometry(QRect(200, 140, 111, 22));
        comboBox_brushlessID->setEditable(true);
        lineEdit_modelName = new QLineEdit(wizardPage1);
        lineEdit_modelName->setObjectName(QStringLiteral("lineEdit_modelName"));
        lineEdit_modelName->setGeometry(QRect(200, 100, 113, 20));
        label_6 = new QLabel(wizardPage1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 10, 81, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        Wizard_Setting->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        label_2 = new QLabel(wizardPage2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 71, 20));
        label_5 = new QLabel(wizardPage2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 81, 31));
        label_5->setFont(font);
        radioButton = new QRadioButton(wizardPage2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(80, 90, 51, 16));
        radioButton->setAutoExclusive(true);
        radioButton_2 = new QRadioButton(wizardPage2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(160, 90, 51, 16));
        radioButton_3 = new QRadioButton(wizardPage2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(160, 170, 51, 16));
        label_7 = new QLabel(wizardPage2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 140, 71, 20));
        radioButton_4 = new QRadioButton(wizardPage2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(80, 170, 51, 16));
        Wizard_Setting->addPage(wizardPage2);
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QStringLiteral("wizardPage"));
        label_8 = new QLabel(wizardPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 81, 31));
        label_8->setFont(font);
        label_3 = new QLabel(wizardPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 101, 16));
        comboBox = new QComboBox(wizardPage);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 70, 81, 22));
        comboBox_2 = new QComboBox(wizardPage);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 130, 141, 22));
        checkBox = new QCheckBox(wizardPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(250, 70, 91, 16));
        label_9 = new QLabel(wizardPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 130, 61, 16));
        comboBox_3 = new QComboBox(wizardPage);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(120, 160, 141, 22));
        label_10 = new QLabel(wizardPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 160, 61, 16));
        label_11 = new QLabel(wizardPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 220, 81, 16));
        radioButton_5 = new QRadioButton(wizardPage);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(200, 220, 51, 16));
        radioButton_6 = new QRadioButton(wizardPage);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(120, 220, 51, 16));
        checkBox_2 = new QCheckBox(wizardPage);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(40, 270, 291, 16));
        Wizard_Setting->addPage(wizardPage);
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QStringLiteral("wizardPage_2"));
        label_12 = new QLabel(wizardPage_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 10, 131, 31));
        label_12->setFont(font);
        comboBox_4 = new QComboBox(wizardPage_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(110, 80, 81, 22));
        label_13 = new QLabel(wizardPage_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 80, 61, 16));
        comboBox_5 = new QComboBox(wizardPage_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(110, 130, 171, 22));
        label_14 = new QLabel(wizardPage_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 130, 61, 16));
        groupBox = new QGroupBox(wizardPage_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 180, 191, 80));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(20, 20, 89, 16));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(20, 50, 89, 16));
        Wizard_Setting->addPage(wizardPage_2);
        wizardPage_3 = new QWizardPage();
        wizardPage_3->setObjectName(QStringLiteral("wizardPage_3"));
        label_15 = new QLabel(wizardPage_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 20, 131, 31));
        label_15->setFont(font);
        label_16 = new QLabel(wizardPage_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 80, 61, 16));
        radioButton_9 = new QRadioButton(wizardPage_3);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(70, 100, 89, 16));
        radioButton_10 = new QRadioButton(wizardPage_3);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(170, 100, 89, 16));
        radioButton_11 = new QRadioButton(wizardPage_3);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(280, 100, 151, 16));
        radioButton_12 = new QRadioButton(wizardPage_3);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(70, 150, 301, 16));
        radioButton_13 = new QRadioButton(wizardPage_3);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(70, 180, 241, 16));
        label_17 = new QLabel(wizardPage_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 240, 81, 16));
        comboBox_6 = new QComboBox(wizardPage_3);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(120, 240, 171, 22));
        Wizard_Setting->addPage(wizardPage_3);

        retranslateUi(Wizard_Setting);

        QMetaObject::connectSlotsByName(Wizard_Setting);
    } // setupUi

    void retranslateUi(QWizard *Wizard_Setting)
    {
        Wizard_Setting->setWindowTitle(QApplication::translate("Wizard_Setting", "Wizard", 0));
        label->setText(QApplication::translate("Wizard_Setting", "\346\250\241\345\236\213\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("Wizard_Setting", "\351\251\261\345\212\250\345\231\250ID\357\274\232", 0));
        comboBox_brushlessID->clear();
        comboBox_brushlessID->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "1234", 0)
        );
        label_6->setText(QApplication::translate("Wizard_Setting", "\346\250\241\345\236\213\351\200\211\346\213\251\357\274\232", 0));
        label_2->setText(QApplication::translate("Wizard_Setting", "\351\251\261\345\212\250\345\231\250\347\261\273\345\236\213\357\274\232", 0));
        label_5->setText(QApplication::translate("Wizard_Setting", "\347\224\265\346\234\272\351\200\211\351\241\271\357\274\232", 0));
        radioButton->setText(QApplication::translate("Wizard_Setting", "\346\227\240\345\210\267", 0));
        radioButton_2->setText(QApplication::translate("Wizard_Setting", "\346\234\211\345\210\267", 0));
        radioButton_3->setText(QApplication::translate("Wizard_Setting", "\347\272\277\346\200\247", 0));
        label_7->setText(QApplication::translate("Wizard_Setting", "\347\224\265\346\234\272\347\261\273\345\236\213\357\274\232", 0));
        radioButton_4->setText(QApplication::translate("Wizard_Setting", "\346\227\213\350\275\254", 0));
        label_8->setText(QApplication::translate("Wizard_Setting", "\345\217\215\351\246\210\351\200\211\351\241\271\357\274\232", 0));
        label_3->setText(QApplication::translate("Wizard_Setting", "\351\234\215\345\260\224\344\274\240\346\204\237\345\231\250\347\261\273\345\236\213\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "None", 0)
         << QApplication::translate("Wizard_Setting", "Digital", 0)
         << QApplication::translate("Wizard_Setting", "Analogy", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "None", 0)
         << QApplication::translate("Wizard_Setting", "Resolver", 0)
         << QApplication::translate("Wizard_Setting", "Secondary Incremental", 0)
        );
        checkBox->setText(QApplication::translate("Wizard_Setting", "\351\234\215\345\260\224\346\226\271\345\220\221\347\237\253\346\255\243", 0));
        label_9->setText(QApplication::translate("Wizard_Setting", "\347\224\265\346\234\272\345\217\215\351\246\210\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "None", 0)
         << QApplication::translate("Wizard_Setting", "Resolver", 0)
         << QApplication::translate("Wizard_Setting", "Secondary Incremental", 0)
        );
        label_10->setText(QApplication::translate("Wizard_Setting", "\350\264\237\350\275\275\345\217\215\351\246\210\357\274\232", 0));
        label_11->setText(QApplication::translate("Wizard_Setting", "\350\264\237\350\275\275\345\217\215\351\246\210\347\261\273\345\236\213\357\274\232", 0));
        radioButton_5->setText(QApplication::translate("Wizard_Setting", "\347\272\277\346\200\247", 0));
        radioButton_6->setText(QApplication::translate("Wizard_Setting", "\346\227\213\350\275\254", 0));
        checkBox_2->setText(QApplication::translate("Wizard_Setting", "Use Load Feedback In Passive (Monitor) Mode", 0));
        label_12->setText(QApplication::translate("Wizard_Setting", "\346\223\215\344\275\234\346\250\241\345\274\217\351\200\211\351\241\271\357\274\232", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "\347\224\265\346\265\201", 0)
         << QApplication::translate("Wizard_Setting", "\351\200\237\345\272\246", 0)
         << QApplication::translate("Wizard_Setting", "\344\275\215\347\275\256", 0)
        );
        label_13->setText(QApplication::translate("Wizard_Setting", "\346\223\215\344\275\234\346\250\241\345\274\217\357\274\232", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "Analog Command", 0)
         << QApplication::translate("Wizard_Setting", "Digital Input", 0)
         << QApplication::translate("Wizard_Setting", "CAN", 0)
         << QApplication::translate("Wizard_Setting", "Serial", 0)
        );
        label_14->setText(QApplication::translate("Wizard_Setting", "\345\221\275\344\273\244\346\272\220\357\274\232", 0));
        groupBox->setTitle(QApplication::translate("Wizard_Setting", "\346\225\260\345\255\227\350\276\223\345\205\245\346\272\220", 0));
        radioButton_7->setText(QApplication::translate("Wizard_Setting", "\351\253\230\351\200\237\350\276\223\345\205\245", 0));
        radioButton_8->setText(QApplication::translate("Wizard_Setting", "\345\244\232\346\250\241\345\274\217\347\253\257\345\217\243", 0));
        label_15->setText(QApplication::translate("Wizard_Setting", "\346\223\215\344\275\234\346\250\241\345\274\217\351\200\211\351\241\271\357\274\232", 0));
        label_16->setText(QApplication::translate("Wizard_Setting", "\346\225\264\346\265\201\346\226\271\345\274\217\357\274\232", 0));
        radioButton_9->setText(QApplication::translate("Wizard_Setting", "Sinusoidal", 0));
        radioButton_10->setText(QApplication::translate("Wizard_Setting", "Trapezoidal", 0));
        radioButton_11->setText(QApplication::translate("Wizard_Setting", "Estimated Sinusoidal", 0));
        radioButton_12->setText(QApplication::translate("Wizard_Setting", "Use Back EMF For Velocity", 0));
        radioButton_13->setText(QApplication::translate("Wizard_Setting", "Use Halls for Veocity and Position", 0));
        label_17->setText(QApplication::translate("Wizard_Setting", "\345\244\232\346\250\241\345\274\217\347\253\257\345\217\243\357\274\232", 0));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("Wizard_Setting", "Differential Input", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Wizard_Setting: public Ui_Wizard_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_SETTING_H
