#pragma once
#include "drink.h"
#include <string>

class Coffee : public Drink {
public:
    std::string name;

    Coffee(std::string _name);
    Coffee();
    virtual ~Coffee();

    void prepare();
    void serve();
};