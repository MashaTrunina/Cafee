#include "Staff.h"

Staff::Staff(std::string _name, std::string _skill) : Name(_name), skill(_skill) {}

Staff::Staff() : Name(" "), skill(" ") {}

Staff::~Staff() {}

void Staff::take_info() {
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Skills: " << skill << std::endl;
};