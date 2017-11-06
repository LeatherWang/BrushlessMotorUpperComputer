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

void BasicSetup::setMotorFamily(short family)
{
    this.combinedMtrFamilyType = (this.combinedMtrFamilyType & 0xFFFFFFCF | family);
    switch (family)
    {
    case 16:
        setHallType((short)0);
        break;
    case 32:
        if (!AmplifierConstants.isAmpStepper(this.hwType)) {
            this.phaseMode = 0;
        }
        break;
    default:break;
    }
}

bool BasicSetup::setMotorType(short type)
{
    this.combinedMtrFamilyType = (this.combinedMtrFamilyType & 0xFFFFFFFE | type);
}

short BasicSetup::getMotorFamily()
{
    return (short)(this.combinedMtrFamilyType & 0x30);
}

short BasicSetup::getMotorType()
{
    return (short)(this.combinedMtrFamilyType & 0x1);
}

bool BasicSetup::isMotorTypeChanged()
{
    int savedType = this.savedCombinedMtrFamilyType & 0x1;
    if (savedType != getMotorType()) {
        return true;
    }
    return false;
}

bool BasicSetup::isMotorFamilyChanged()
{
    int savedFamily = this.savedCombinedMtrFamilyType & 0x30;
    if (savedFamily != getMotorFamily()) {
        return true;
    }
    return false;
}

void BasicSetup::on_pushButton_clicked()
{

}
