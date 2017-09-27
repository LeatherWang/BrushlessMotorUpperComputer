#include "i_loopsetting.h"
#include "ui_i_loopsetting.h"

I_LoopSetting::I_LoopSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::I_LoopSetting)
{
    ui->setupUi(this);
    this->setWindowTitle("Current Loop");
    // '⁰','¹','²','³','⁴','⁵','⁶','⁷','⁸','⁹';
    //ui->label_2->setText("I²T Time Limit:");
}

I_LoopSetting::~I_LoopSetting()
{
    delete ui;
}
