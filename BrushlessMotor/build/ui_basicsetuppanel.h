/********************************************************************************
** Form generated from reading UI file 'basicsetuppanel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICSETUPPANEL_H
#define UI_BASICSETUPPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicSetupPanel
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *BasicSetupPanel)
    {
        if (BasicSetupPanel->objectName().isEmpty())
            BasicSetupPanel->setObjectName(QStringLiteral("BasicSetupPanel"));
        BasicSetupPanel->resize(466, 362);
        groupBox = new QGroupBox(BasicSetupPanel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 381, 281));
        pushButton = new QPushButton(BasicSetupPanel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 320, 111, 23));
        pushButton_2 = new QPushButton(BasicSetupPanel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 320, 111, 23));
        pushButton_3 = new QPushButton(BasicSetupPanel);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 320, 111, 23));

        retranslateUi(BasicSetupPanel);

        QMetaObject::connectSlotsByName(BasicSetupPanel);
    } // setupUi

    void retranslateUi(QWidget *BasicSetupPanel)
    {
        BasicSetupPanel->setWindowTitle(QApplication::translate("BasicSetupPanel", "Form", 0));
        groupBox->setTitle(QApplication::translate("BasicSetupPanel", "Settings", 0));
        pushButton->setText(QApplication::translate("BasicSetupPanel", "Change Settings", 0));
        pushButton_2->setText(QApplication::translate("BasicSetupPanel", "Load ini File", 0));
        pushButton_3->setText(QApplication::translate("BasicSetupPanel", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class BasicSetupPanel: public Ui_BasicSetupPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSETUPPANEL_H
