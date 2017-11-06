#ifndef AMPLIFIERCONSTANTS_H
#define AMPLIFIERCONSTANTS_H
#include <iostream>
#include "string.h"
#include <QStringList>

using namespace std;

class AmplifierConstants
{
public:
    AmplifierConstants();

public:
     static string getMotorTypeString(short type);
     static string getMotorFamilyString(short family);
};

#endif // AMPLIFIERCONSTANTS_H
