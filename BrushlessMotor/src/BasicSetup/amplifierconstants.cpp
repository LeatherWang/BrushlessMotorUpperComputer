#include "amplifierconstants.h"
#include<vector>

//QStringList MotorTypeStrings1 = (QStringList() << "str1" << "str2" << "str3");
string MotorTypeStrings[2] = {"Rotary", "Linear"};
//vector<string> MotorTypeStrings{"Rotary", "Linear"};

AmplifierConstants::AmplifierConstants()
{
}

string AmplifierConstants::getMotorTypeString(short type)
{
    type = (short)(type & 0x1);
    if ((type < 0) || (type >= sizeof(MotorTypeStrings)/sizeof(MotorTypeStrings[0]))){
        return "Rotary";
    }
    return MotorTypeStrings[type];
}

string AmplifierConstants::getMotorFamilyString(short family)
{
    string motorFamilyStr;
    switch (family)
    {
    case 48:
        motorFamilyStr = "Brushless";
        break;
    case 16:
        motorFamilyStr = "Brush";
        break;
    case 32:
        motorFamilyStr = "Stepper Motor";
        break;
    default:
        motorFamilyStr = "Unknown Motor";
    }
    return motorFamilyStr;
}


