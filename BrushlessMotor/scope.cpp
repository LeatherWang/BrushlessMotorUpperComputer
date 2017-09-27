#include "scope.h"
#include "ui_scope.h"

Scope::Scope(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Scope)
{
    ui->setupUi(this);
    openFlag = false;
}

Scope::~Scope()
{
    delete ui;
}

void Scope::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    openFlag = false;
}
