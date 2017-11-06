/********************************************************************************
** Form generated from reading UI file 'basicsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICSETUP_H
#define UI_BASICSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicSetup
{
public:

    void setupUi(QWidget *BasicSetup)
    {
        if (BasicSetup->objectName().isEmpty())
            BasicSetup->setObjectName(QStringLiteral("BasicSetup"));
        BasicSetup->resize(400, 300);

        retranslateUi(BasicSetup);

        QMetaObject::connectSlotsByName(BasicSetup);
    } // setupUi

    void retranslateUi(QWidget *BasicSetup)
    {
        BasicSetup->setWindowTitle(QApplication::translate("BasicSetup", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BasicSetup: public Ui_BasicSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSETUP_H
