#include "motorfeedback.h"
#include "ui_motorfeedback.h"

MotorFeedback::MotorFeedback(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MotorFeedback)
{
    ui->setupUi(this);
    this->setWindowTitle("Motor/Feedback - Rotary Motor");
}

MotorFeedback::~MotorFeedback()
{
    delete ui;
}
