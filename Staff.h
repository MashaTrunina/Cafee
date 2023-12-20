#pragma once
#include <iostream>
#include <string>

class Staff {
public:
    std::string Name;
    std::string skill;

public:
    Staff(std::string _name, std::string _skill);
    Staff();
    virtual ~Staff();

    virtual void take_info();
};