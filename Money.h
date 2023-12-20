#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>

class Money {
private:
    int amount;

public:
    Money();
    void transfer();
    void generateMoney();
};