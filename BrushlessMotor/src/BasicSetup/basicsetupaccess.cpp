#include "basicsetupaccess.h"

BasicSetupAccess::BasicSetupAccess(QString &iniFilePath)
{
    initData(iniFilePath);
}

void BasicSetupAccess::initData(QString &iniFilePath)
{
//    basicSetupDriver = new BasicSetupDriver(iniFilePath);
//    combinedMtrFamilyType = this->basicSetupDriver->getCombinedMotorFamilyType();
//    this->savedCombinedMtrFamilyType = this->combinedMtrFamilyType;

}

QString BasicSetupAccess::getMotorID()
{
    return (QString) (this->basicSetupDriver->getMotorID());
}

short BasicSetupAccess::getMotorFamily()
{
    return (short)(this->combinedMtrFamilyType & 0x30);
}

short BasicSetupAccess::getMotorType()
{
    return (short)(this->combinedMtrFamilyType & 0x01);
}
/*
void BasicSetupAccess::setMotorFamily(short family)
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

bool BasicSetupAccess::setMotorType(short type)
{
    this.combinedMtrFamilyType = (this.combinedMtrFamilyType & 0xFFFFFFFE | type);
}

bool BasicSetupAccess::isMotorTypeChanged()
{
    int savedType = this.savedCombinedMtrFamilyType & 0x1;
    if (savedType != getMotorType()) {
        return true;
    }
    return false;
}

bool BasicSetupAccess::isMotorFamilyChanged()
{
    int savedFamily = this.savedCombinedMtrFamilyType & 0x30;
    if (savedFamily != getMotorFamily()) {
        return true;
    }
    return false;
}
*/

bool BasicSetupAccess::isConfiguredMotor()
{
return true;
}
