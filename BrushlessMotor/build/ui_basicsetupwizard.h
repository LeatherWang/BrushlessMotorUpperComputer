/********************************************************************************
** Form generated from reading UI file 'basicsetupwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICSETUPWIZARD_H
#define UI_BASICSETUPWIZARD_H

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

class Ui_BasicSetupWizard
{
public:
    QWizardPage *wizardPage_5;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_18;
    QLabel *label_motorID;
    QLabel *label_motorFamily;
    QLabel *label_motorType;
    QWizardPage *wizardPage2;
    QComboBox *comboBox_brushlessID;
    QLineEdit *lineEdit_modelName;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_4;
    QWizardPage *wizardPage;
    QGroupBox *groupBox_motorFamily;
    QRadioButton *radioButton_brush;
    QRadioButton *radioButton_brushless;
    QLabel *label_5;
    QGroupBox *groupBox_motorType;
    QRadioButton *radioButton_linear;
    QRadioButton *radioButton_rotary;
    QWizardPage *wizardPage_2;
    QComboBox *comboBox;
    QLabel *label_10;
    QRadioButton *radioButton_5;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QLabel *label_8;
    QCheckBox *checkBox;
    QLabel *label_11;
    QComboBox *comboBox_2;
    QRadioButton *radioButton_6;
    QWizardPage *wizardPage_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLabel *label_14;
    QLabel *label_12;
    QComboBox *comboBox_4;
    QLabel *label_13;
    QComboBox *comboBox_5;
    QWizardPage *wizardPage_4;
    QLabel *label_17;
    QComboBox *comboBox_6;
    QRadioButton *radioButton_10;
    QLabel *label_16;
    QLabel *label_15;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_11;

    void setupUi(QWizard *BasicSetupWizard)
    {
        if (BasicSetupWizard->objectName().isEmpty())
            BasicSetupWizard->setObjectName(QStringLiteral("BasicSetupWizard"));
        BasicSetupWizard->resize(463, 353);
        BasicSetupWizard->setWizardStyle(QWizard::NStyles);
        BasicSetupWizard->setOptions(QWizard::HelpButtonOnRight);
        wizardPage_5 = new QWizardPage();
        wizardPage_5->setObjectName(QStringLiteral("wizardPage_5"));
        groupBox_2 = new QGroupBox(wizardPage_5);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 10, 401, 291));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 81, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 40, 81, 16));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 80, 81, 16));
        label_motorID = new QLabel(groupBox_2);
        label_motorID->setObjectName(QStringLiteral("label_motorID"));
        label_motorID->setGeometry(QRect(120, 40, 81, 16));
        label_motorFamily = new QLabel(groupBox_2);
        label_motorFamily->setObjectName(QStringLiteral("label_motorFamily"));
        label_motorFamily->setGeometry(QRect(120, 60, 81, 16));
        label_motorType = new QLabel(groupBox_2);
        label_motorType->setObjectName(QStringLiteral("label_motorType"));
        label_motorType->setGeometry(QRect(120, 80, 81, 16));
        BasicSetupWizard->addPage(wizardPage_5);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        comboBox_brushlessID = new QComboBox(wizardPage2);
        comboBox_brushlessID->setObjectName(QStringLiteral("comboBox_brushlessID"));
        comboBox_brushlessID->setGeometry(QRect(190, 170, 111, 22));
        comboBox_brushlessID->setEditable(true);
        lineEdit_modelName = new QLineEdit(wizardPage2);
        lineEdit_modelName->setObjectName(QStringLiteral("lineEdit_modelName"));
        lineEdit_modelName->setGeometry(QRect(190, 130, 113, 20));
        label_6 = new QLabel(wizardPage2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 81, 31));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label = new QLabel(wizardPage2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 130, 54, 12));
        label_4 = new QLabel(wizardPage2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 170, 61, 20));
        BasicSetupWizard->addPage(wizardPage2);
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QStringLiteral("wizardPage"));
        groupBox_motorFamily = new QGroupBox(wizardPage);
        groupBox_motorFamily->setObjectName(QStringLiteral("groupBox_motorFamily"));
        groupBox_motorFamily->setGeometry(QRect(30, 60, 290, 70));
        groupBox_motorFamily->setCheckable(false);
        radioButton_brush = new QRadioButton(groupBox_motorFamily);
        radioButton_brush->setObjectName(QStringLiteral("radioButton_brush"));
        radioButton_brush->setGeometry(QRect(130, 30, 61, 16));
        radioButton_brushless = new QRadioButton(groupBox_motorFamily);
        radioButton_brushless->setObjectName(QStringLiteral("radioButton_brushless"));
        radioButton_brushless->setGeometry(QRect(20, 30, 81, 16));
        radioButton_brushless->setAutoExclusive(true);
        label_5 = new QLabel(wizardPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 81, 31));
        label_5->setFont(font);
        groupBox_motorType = new QGroupBox(wizardPage);
        groupBox_motorType->setObjectName(QStringLiteral("groupBox_motorType"));
        groupBox_motorType->setGeometry(QRect(30, 150, 290, 70));
        radioButton_linear = new QRadioButton(groupBox_motorType);
        radioButton_linear->setObjectName(QStringLiteral("radioButton_linear"));
        radioButton_linear->setGeometry(QRect(130, 30, 81, 16));
        radioButton_rotary = new QRadioButton(groupBox_motorType);
        radioButton_rotary->setObjectName(QStringLiteral("radioButton_rotary"));
        radioButton_rotary->setGeometry(QRect(20, 30, 91, 16));
        BasicSetupWizard->addPage(wizardPage);
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QStringLiteral("wizardPage_2"));
        comboBox = new QComboBox(wizardPage_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 70, 81, 22));
        label_10 = new QLabel(wizardPage_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 160, 61, 16));
        radioButton_5 = new QRadioButton(wizardPage_2);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(210, 220, 51, 16));
        label_9 = new QLabel(wizardPage_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 130, 61, 16));
        comboBox_3 = new QComboBox(wizardPage_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(130, 160, 141, 22));
        label_3 = new QLabel(wizardPage_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 101, 16));
        checkBox_2 = new QCheckBox(wizardPage_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(50, 270, 291, 16));
        label_8 = new QLabel(wizardPage_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 10, 81, 31));
        label_8->setFont(font);
        checkBox = new QCheckBox(wizardPage_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(260, 70, 91, 16));
        label_11 = new QLabel(wizardPage_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 220, 81, 16));
        comboBox_2 = new QComboBox(wizardPage_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 130, 141, 22));
        radioButton_6 = new QRadioButton(wizardPage_2);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(130, 220, 51, 16));
        BasicSetupWizard->addPage(wizardPage_2);
        wizardPage_3 = new QWizardPage();
        wizardPage_3->setObjectName(QStringLiteral("wizardPage_3"));
        groupBox = new QGroupBox(wizardPage_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 180, 191, 80));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(20, 20, 89, 16));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(20, 50, 89, 16));
        label_14 = new QLabel(wizardPage_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 130, 61, 16));
        label_12 = new QLabel(wizardPage_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 10, 131, 31));
        label_12->setFont(font);
        comboBox_4 = new QComboBox(wizardPage_3);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 80, 81, 22));
        label_13 = new QLabel(wizardPage_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 80, 61, 16));
        comboBox_5 = new QComboBox(wizardPage_3);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(120, 130, 171, 22));
        BasicSetupWizard->addPage(wizardPage_3);
        wizardPage_4 = new QWizardPage();
        wizardPage_4->setObjectName(QStringLiteral("wizardPage_4"));
        label_17 = new QLabel(wizardPage_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 240, 81, 16));
        comboBox_6 = new QComboBox(wizardPage_4);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(110, 240, 171, 22));
        radioButton_10 = new QRadioButton(wizardPage_4);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(160, 100, 89, 16));
        label_16 = new QLabel(wizardPage_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 80, 61, 16));
        label_15 = new QLabel(wizardPage_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 20, 131, 31));
        label_15->setFont(font);
        radioButton_12 = new QRadioButton(wizardPage_4);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(60, 150, 301, 16));
        radioButton_13 = new QRadioButton(wizardPage_4);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(60, 180, 241, 16));
        radioButton_9 = new QRadioButton(wizardPage_4);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(60, 100, 89, 16));
        radioButton_11 = new QRadioButton(wizardPage_4);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(270, 100, 151, 16));
        BasicSetupWizard->addPage(wizardPage_4);

        retranslateUi(BasicSetupWizard);

        QMetaObject::connectSlotsByName(BasicSetupWizard);
    } // setupUi

    void retranslateUi(QWizard *BasicSetupWizard)
    {
        BasicSetupWizard->setWindowTitle(QApplication::translate("BasicSetupWizard", "Wizard", 0));
        groupBox_2->setTitle(QApplication::translate("BasicSetupWizard", "Settings", 0));
        label_2->setText(QApplication::translate("BasicSetupWizard", "Motor Family:", 0));
        label_7->setText(QApplication::translate("BasicSetupWizard", "Motor ID:", 0));
        label_18->setText(QApplication::translate("BasicSetupWizard", "Motor Type:", 0));
        label_motorID->setText(QApplication::translate("BasicSetupWizard", "**", 0));
        label_motorFamily->setText(QApplication::translate("BasicSetupWizard", "**", 0));
        label_motorType->setText(QApplication::translate("BasicSetupWizard", "**", 0));
        comboBox_brushlessID->clear();
        comboBox_brushlessID->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "1234", 0)
        );
        label_6->setText(QApplication::translate("BasicSetupWizard", "\346\250\241\345\236\213\351\200\211\346\213\251\357\274\232", 0));
        label->setText(QApplication::translate("BasicSetupWizard", "\346\250\241\345\236\213\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("BasicSetupWizard", "\351\251\261\345\212\250\345\231\250ID\357\274\232", 0));
        groupBox_motorFamily->setTitle(QApplication::translate("BasicSetupWizard", "Motor Family:", 0));
        radioButton_brush->setText(QApplication::translate("BasicSetupWizard", "Brush", 0));
        radioButton_brushless->setText(QApplication::translate("BasicSetupWizard", "Brushless", 0));
        label_5->setText(QApplication::translate("BasicSetupWizard", "\347\224\265\346\234\272\351\200\211\351\241\271\357\274\232", 0));
        groupBox_motorType->setTitle(QApplication::translate("BasicSetupWizard", "Motor Type", 0));
        radioButton_linear->setText(QApplication::translate("BasicSetupWizard", "Linear", 0));
        radioButton_rotary->setText(QApplication::translate("BasicSetupWizard", "Rotary", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "None", 0)
         << QApplication::translate("BasicSetupWizard", "Digital", 0)
         << QApplication::translate("BasicSetupWizard", "Analogy", 0)
        );
        label_10->setText(QApplication::translate("BasicSetupWizard", "\350\264\237\350\275\275\345\217\215\351\246\210\357\274\232", 0));
        radioButton_5->setText(QApplication::translate("BasicSetupWizard", "\347\272\277\346\200\247", 0));
        label_9->setText(QApplication::translate("BasicSetupWizard", "\347\224\265\346\234\272\345\217\215\351\246\210\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "None", 0)
         << QApplication::translate("BasicSetupWizard", "Resolver", 0)
         << QApplication::translate("BasicSetupWizard", "Secondary Incremental", 0)
        );
        label_3->setText(QApplication::translate("BasicSetupWizard", "\351\234\215\345\260\224\344\274\240\346\204\237\345\231\250\347\261\273\345\236\213\357\274\232", 0));
        checkBox_2->setText(QApplication::translate("BasicSetupWizard", "Use Load Feedback In Passive (Monitor) Mode", 0));
        label_8->setText(QApplication::translate("BasicSetupWizard", "\345\217\215\351\246\210\351\200\211\351\241\271\357\274\232", 0));
        checkBox->setText(QApplication::translate("BasicSetupWizard", "\351\234\215\345\260\224\346\226\271\345\220\221\347\237\253\346\255\243", 0));
        label_11->setText(QApplication::translate("BasicSetupWizard", "\350\264\237\350\275\275\345\217\215\351\246\210\347\261\273\345\236\213\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "None", 0)
         << QApplication::translate("BasicSetupWizard", "Resolver", 0)
         << QApplication::translate("BasicSetupWizard", "Secondary Incremental", 0)
        );
        radioButton_6->setText(QApplication::translate("BasicSetupWizard", "\346\227\213\350\275\254", 0));
        groupBox->setTitle(QApplication::translate("BasicSetupWizard", "\346\225\260\345\255\227\350\276\223\345\205\245\346\272\220", 0));
        radioButton_7->setText(QApplication::translate("BasicSetupWizard", "\351\253\230\351\200\237\350\276\223\345\205\245", 0));
        radioButton_8->setText(QApplication::translate("BasicSetupWizard", "\345\244\232\346\250\241\345\274\217\347\253\257\345\217\243", 0));
        label_14->setText(QApplication::translate("BasicSetupWizard", "\345\221\275\344\273\244\346\272\220\357\274\232", 0));
        label_12->setText(QApplication::translate("BasicSetupWizard", "\346\223\215\344\275\234\346\250\241\345\274\217\351\200\211\351\241\271\357\274\232", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "\347\224\265\346\265\201", 0)
         << QApplication::translate("BasicSetupWizard", "\351\200\237\345\272\246", 0)
         << QApplication::translate("BasicSetupWizard", "\344\275\215\347\275\256", 0)
        );
        label_13->setText(QApplication::translate("BasicSetupWizard", "\346\223\215\344\275\234\346\250\241\345\274\217\357\274\232", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "Analog Command", 0)
         << QApplication::translate("BasicSetupWizard", "Digital Input", 0)
         << QApplication::translate("BasicSetupWizard", "CAN", 0)
         << QApplication::translate("BasicSetupWizard", "Serial", 0)
        );
        label_17->setText(QApplication::translate("BasicSetupWizard", "\345\244\232\346\250\241\345\274\217\347\253\257\345\217\243\357\274\232", 0));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("BasicSetupWizard", "Differential Input", 0)
        );
        radioButton_10->setText(QApplication::translate("BasicSetupWizard", "Trapezoidal", 0));
        label_16->setText(QApplication::translate("BasicSetupWizard", "\346\225\264\346\265\201\346\226\271\345\274\217\357\274\232", 0));
        label_15->setText(QApplication::translate("BasicSetupWizard", "\346\223\215\344\275\234\346\250\241\345\274\217\351\200\211\351\241\271\357\274\232", 0));
        radioButton_12->setText(QApplication::translate("BasicSetupWizard", "Use Back EMF For Velocity", 0));
        radioButton_13->setText(QApplication::translate("BasicSetupWizard", "Use Halls for Veocity and Position", 0));
        radioButton_9->setText(QApplication::translate("BasicSetupWizard", "Sinusoidal", 0));
        radioButton_11->setText(QApplication::translate("BasicSetupWizard", "Estimated Sinusoidal", 0));
    } // retranslateUi

};

namespace Ui {
    class BasicSetupWizard: public Ui_BasicSetupWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSETUPWIZARD_H
