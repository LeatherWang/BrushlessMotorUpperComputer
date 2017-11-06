#include "motorfeedback.h"
#include "ui_motorfeedback.h"

MotorFeedback::MotorFeedback(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MotorFeedback)
{
    ui->setupUi(this);
}

MotorFeedback::~MotorFeedback()
{
    delete ui;
}
