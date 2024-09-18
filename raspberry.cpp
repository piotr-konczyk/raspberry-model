#include "raspberry.h"
#include <iostream>

Raspberry::Raspberry(SingleSwitch *switches)
{
    this->switches = switches;
}

SingleSwitch Raspberry::getSwitchByIndex(int index)
{

    if (index < 0 || index >= SWITCHES_COUNT)
    {
        std::cerr << "Index out of bounds!" << std::endl;
        return SingleSwitch(false, DefaultValue::NOT_CONFIGURABLE, "", 0);
    }

    return switches[index];
}