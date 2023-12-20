#include "Money.h"

Money::Money() {}

void Money::transfer() {
    std::cout << " Your balance: " << amount << std::endl;
}

void Money::generateMoney() {
    srand(static_cast<unsigned>(time(0)));
    amount = rand() % 151 + 50;
};