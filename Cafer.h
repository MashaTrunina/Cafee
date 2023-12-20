#pragma once
#include <iostream>
#include <string>

class Cafe {
public:
    std::string name;

public:
    Cafe(std::string _name);
    Cafe();
    virtual ~Cafe();

    virtual void get_info();
};