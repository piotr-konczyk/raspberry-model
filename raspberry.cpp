#include <iostream>
#include "raspberry.h"

SingleSwitch::SingleSwitch(bool isConfigurable, bool isToggled, std::string switchName, int switchNumber)
{
    this->isConfigurable = isConfigurable;
    this->isToggled = isToggled;

    if (!isConfigurable)
    {
        this->isToggled = false;
    }

    this->switchName = switchName;
    this->switchNumber = switchNumber;
};

void SingleSwitch::setIsToggled(bool isToggled)
{
    if (isConfigurable)
    {
        this->isToggled = isToggled;
    }
};
