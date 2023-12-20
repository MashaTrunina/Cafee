#pragma once
#include <iostream>
#include <string>

class Character {
public:
    std::string name;

public:
    Character(std::string _name);
    Character();
    virtual ~Character();

    virtual void displayInfo();
};