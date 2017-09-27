/********************************************************************************
** Form generated from reading UI file 'scope.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOPE_H
#define UI_SCOPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scope
{
public:

    void setupUi(QWidget *Scope)
    {
        if (Scope->objectName().isEmpty())
            Scope->setObjectName(QStringLiteral("Scope"));
        Scope->resize(400, 300);

        retranslateUi(Scope);

        QMetaObject::connectSlotsByName(Scope);
    } // setupUi

    void retranslateUi(QWidget *Scope)
    {
        Scope->setWindowTitle(QApplication::translate("Scope", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Scope: public Ui_Scope {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOPE_H
