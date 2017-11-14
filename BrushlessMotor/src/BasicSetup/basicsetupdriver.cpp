#include "basicsetupdriver.h"
#include <QDir>

shared_ptr<BasicSetupDriver> BasicSetupDriver::basicSetupDriver_ = nullptr;

BasicSetupDriver::~BasicSetupDriver()
{

}

/**
* @brief You should call this function before you use a new medel.
* @param the path of iniFilePath
* @return no
*/
void BasicSetupDriver::setParameterFile(QString &iniFilePath)
{
    if(basicSetupDriver_ == nullptr)
        basicSetupDriver_ = shared_ptr<BasicSetupDriver>(new BasicSetupDriver);

    QSettings settings(iniFilePath, QSettings::IniFormat);
    basicSetupDriver_->m_motorID = settings.value(QString("Motor ID")).toString(); //@TODO:如果不存在该参数的异常处理
    basicSetupDriver_->m_combinedMotorFamilyType = settings.value(QString("Motor Type")).toString().toShort();
    basicSetupDriver_->m_motorFamily = ((short)(basicSetupDriver_->m_combinedMotorFamilyType & 0x30));
    basicSetupDriver_->m_motorType = ((short)(basicSetupDriver_->m_combinedMotorFamilyType & 0x1));
    basicSetupDriver_->m_ampFeaturesCapable = 0x01;
}

bool BasicSetupDriver::createConfigFile(const QString &iniFilePath)
{
    //settings = new QSettings(iniFilePath, QSettings::IniFormat);//TODO
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
    return basicSetupDriver_->m_motorID;
}

short BasicSetupDriver::getCombinedMotorFamilyType()
{
    return basicSetupDriver_->m_combinedMotorFamilyType;
}

bool BasicSetupDriver::isConfiguredMotor()
{
    return true;
}

/**
* @brief
* 0 hallsSupported
* 1
* 2
* 3
* 4 5 6 7
* @param
* @return no
*/
short BasicSetupDriver::getAmpFeaturesCapable()
{
    return basicSetupDriver_->m_ampFeaturesCapable;
}




