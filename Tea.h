#pragma once
#include "drink.h"
#include <string>

class Tea : public Drink {
public:
    std::string type;

    Tea(std::string _type);
    Tea();
    virtual ~Tea();

    void prepare();
    void serve();
};