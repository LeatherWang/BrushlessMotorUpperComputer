#include "basicsetupdriver.h"

BasicSetupDriver::BasicSetupDriver(QString &iniFilePath)
{
    initData(iniFilePath);
}

void BasicSetupDriver::initData(QString &iniFilePath)
{
    QSettings settings(iniFilePath, QSettings::IniFormat);
    m_motorID = settings.value(QString("Motor ID")).toString();
    m_combinedMotorFamilyType = settings.value(QString("Motor Type")).toString().toShort();
    m_motorFamily = ((short)(m_combinedMotorFamilyType & 0x30));
    m_motorType = ((short)(m_combinedMotorFamilyType & 0x1));
}

bool BasicSetupDriver::createConfigFile(const QString &iniFilePath)
{
    settings = new QSettings(iniFilePath, QSettings::IniFormat);//TODO
    //settings->setValue(QString("ID"), ui->comboBox_brushlessID->currentText());
}

bool BasicSetupDriver::saveConfigFile()
{

}

bool BasicSetupDriver::readConfigFile()
{


    //ui->label_ID->setText(settings.value(QString("ID")).toString());
}

QString BasicSetupDriver::getMotorID()
{
    return this->m_motorID;
}

short BasicSetupDriver::getCombinedMotorFamilyType()
{
    return this->m_combinedMotorFamilyType;
}


