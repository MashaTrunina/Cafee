#include "Character.h"

Character::Character(std::string _name) : name(_name) {}

Character::Character() : name(" ") {}

Character::~Character() {}

void Character::displayInfo() {
    std::cout << "Character: " << name << std::endl;
};