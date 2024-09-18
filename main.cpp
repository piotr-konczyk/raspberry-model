#include <iostream>
#include "raspberry.h"

SingleSwitch switches[] = {
    SingleSwitch(false, DefaultValue::NOT_CONFIGURABLE, "3.3V Power", 1),
};

int main()
{
    Raspberry raspberry = Raspberry(switches);
    raspberry.getSwitchByIndex(0).displayInfo();

    return 0;
}