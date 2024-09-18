#ifndef RASPBERRY_H
#define RASPBERRY_H

#include "single-switch.h"
#include <string>

const int SWITCHES_COUNT = 40;

class Raspberry
{
private:
    std::string name;
    SingleSwitch *switches;

public:
    Raspberry(SingleSwitch *switches);

    SingleSwitch getSwitchByIndex(int index);
};

#endif // RASPBERRY_H
