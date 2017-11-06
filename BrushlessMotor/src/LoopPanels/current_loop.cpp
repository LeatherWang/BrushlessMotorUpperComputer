#include "current_loop.h"
#include "ui_current_loop.h"

Current_Loop::Current_Loop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Current_Loop)
{
    ui->setupUi(this);
}

Current_Loop::~Current_Loop()
{
    delete ui;
}
