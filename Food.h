#pragma once
#include "menu.h"
#include <string>
#include <iostream>

class Food : public Menu {
private:
    std::string name;

public:
    Food(std::string _name);
    Food();
    virtual ~Food();

    virtual void display();
};