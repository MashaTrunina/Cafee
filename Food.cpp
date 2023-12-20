#include "Food.h"

Food::Food(std::string _name) : name(_name) {}

Food::Food() : name("") {}

Food::~Food() {}

void Food::display() {
    std::cout << "Food: " << name << std::endl;
}