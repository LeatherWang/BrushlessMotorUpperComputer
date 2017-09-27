#include "basicsetup.h"
#include "ui_basicsetup.h"

BasicSetup::BasicSetup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BasicSetup)
{
    ui->setupUi(this);
}

BasicSetup::~BasicSetup()
{
    delete ui;
}
