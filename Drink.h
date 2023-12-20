#pragma once
#include "food.h"
#include <string>

class Drink : public Food {
public:
    std::string name;

    Drink(std::string _name);
    Drink();
    virtual ~Drink();

    virtual void display();
};