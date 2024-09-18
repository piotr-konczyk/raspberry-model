#include "single-switch.h"
#include <iostream>

SingleSwitch::SingleSwitch(bool isConfigurable, DefaultValue value, std::string switchName, int switchNumber)
{
    this->isConfigurable = isConfigurable;
    this->value = value;

    if (!isConfigurable)
    {
        this->value = DefaultValue::NOT_CONFIGURABLE;
    }

    this->switchName = switchName;
    this->switchNumber = switchNumber;
};

void SingleSwitch::setValue(DefaultValue value)
{
    if (!isConfigurable)
    {
        return;
    }

    this->value = value;
};

DefaultValue SingleSwitch::getValue()
{
    return value;
};

void SingleSwitch::displayInfo()
{
    std::cout << "Switch name: " << switchName << std::endl;
    std::cout << "Switch number: " << switchNumber << std::endl;

    if (value == DefaultValue::NOT_CONFIGURABLE)
    {
        std::cout << "Switch is not configurable" << std::endl;
        return;
    }

    std::cout << "Switch value: " << (value == DefaultValue::HIGH ? "HIGH" : "LOW") << std::endl;
    std::cout << "Switch is configurable: " << (isConfigurable ? "YES" : "NO") << std::endl;
}
