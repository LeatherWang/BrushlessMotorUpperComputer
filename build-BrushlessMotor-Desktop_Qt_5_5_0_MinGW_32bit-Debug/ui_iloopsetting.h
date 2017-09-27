/********************************************************************************
** Form generated from reading UI file 'iloopsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ILOOPSETTING_H
#define UI_ILOOPSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ILoopSetting
{
public:

    void setupUi(QWidget *ILoopSetting)
    {
        if (ILoopSetting->objectName().isEmpty())
            ILoopSetting->setObjectName(QStringLiteral("ILoopSetting"));
        ILoopSetting->resize(400, 300);

        retranslateUi(ILoopSetting);

        QMetaObject::connectSlotsByName(ILoopSetting);
    } // setupUi

    void retranslateUi(QWidget *ILoopSetting)
    {
        ILoopSetting->setWindowTitle(QApplication::translate("ILoopSetting", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ILoopSetting: public Ui_ILoopSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ILOOPSETTING_H
