/**
* @file basicsetupaccess.h
* @brief This is the API to setting parameter.
* @version 0.0
* @author LeatherWang
* @date 2017-11-05
*/
#ifndef BASICSETUPACCESS_H
#define BASICSETUPACCESS_H
#include "basicsetupdriver.h"

class BasicSetupAccess
{
public:
    BasicSetupAccess(QString &iniFilePath);

private:
    void initData(QString &iniFilePath);
    short combinedMtrFamilyType;
    short savedCombinedMtrFamilyType;

public:
//    void setMotorFamily(short family);
//    bool setMotorType(short type);
    short getMotorFamily();
    short getMotorType();
    QString getMotorID();
    bool isConfiguredMotor();
};
#endif // BASICSETUPACCESS_H
