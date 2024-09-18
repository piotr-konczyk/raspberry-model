#ifndef SINGLE_SWITCH_H
#define SINGLE_SWITCH_H

#include <string>
#include "default-values.h"

class SingleSwitch
{
private:
    bool isConfigurable;
    DefaultValue value;
    std::string switchName;
    int switchNumber;

public:
    // Constructor
    SingleSwitch(bool isConfigurable, DefaultValue value, std::string switchName, int switchNumber);

    // Methods
    void setValue(DefaultValue value);
    DefaultValue getValue();
    void displayInfo();
};

#endif // SINGLE_SWITCH_H
