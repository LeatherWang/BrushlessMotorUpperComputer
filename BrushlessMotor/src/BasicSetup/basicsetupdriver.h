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
//#include "string.h"
#include "vector"
#include <memory>
#include <QDebug>

using namespace std;

class BasicSetupDriver
{
private:
    static shared_ptr<BasicSetupDriver> basicSetupDriver_; //定义为单例模式(Singleton)
    BasicSetupDriver(){} //构造函数声明为私有，防止这个类的对象在别处建立

private:
    QString m_motorID; //配置文件数目多变，故设置为vector
    short m_motorFamily;
    short m_motorType;
    short m_combinedMotorFamilyType;
    bool m_hallsSupported;
    short m_ampFeaturesCapable;//使能位，每一位代表一个参数

public:
    ~BasicSetupDriver();
    static void setParameterFile(QString &iniFilePath); //读取参数，存入

    bool createConfigFile(const QString &iniFilePath);
    bool saveConfigFile();
    bool readConfigFile();

    static QString getMotorID();
    static short getCombinedMotorFamilyType();

    static bool isConfiguredMotor();
    static short getAmpFeaturesCapable();
};

#endif // BASICSETUPDRIVER_H
