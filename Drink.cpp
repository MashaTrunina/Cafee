#include "Drink.h"

Drink::Drink(std::string _name) : name(_name) {}

Drink::Drink() : name("") {}

Drink::~Drink() {}

void Drink::display() {
    std::cout << "Drink: " << name << std::endl;
};