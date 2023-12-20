#pragma once
#include "food.h"
#include <string>

class Pie : public Food {
public:
    std::string type;

public:
    Pie(std::string _type);
    Pie();
    virtual ~Pie();

    void prepare();
    void serve();
};