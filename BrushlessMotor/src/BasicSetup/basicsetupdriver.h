/**
* @file basicsetupdriver.h
* @brief This is the API to configuration file of .ini.
* @version 0.0
* @author LeatherWang
* @date 2017-11-05
*/
#ifndef BASICSETUPDRIVER_H
#define BASICSETUPDRIVER_H
#include <QSettings>
#include <iostream>
#include "string.h"
#include "vector"

using namespace std;
class BasicSetupDriver
{
public:
    BasicSetupDriver(QString &iniFilePath);

    QSettings *settings;
    bool createConfigFile(const QString &iniFilePath);
    bool saveConfigFile();
    bool readConfigFile();
    QString getMotorID();
    short getCombinedMotorFamilyType();

private:
    void initData(QString &iniFilePath);
    QString m_motorID;
    short m_motorFamily;
    short m_motorType;
    short m_combinedMotorFamilyType;
};

#endif // BASICSETUPDRIVER_H
