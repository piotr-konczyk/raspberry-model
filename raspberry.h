struct SingleSwitch
{

    // props

    bool isConfigurable;
    bool isToggled;
    std::string switchName;
    int switchNumber;

    // constructors

    SingleSwitch(bool isConfigurable, bool isToggled, std::string switchName, int switchNumber);

    // methods

    void setIsToggled(bool isToggled);
};

class Raspberry
{
    std::string name;
    SingleSwitch *switches;

    Raspberry(SingleSwitch *switches);
};
