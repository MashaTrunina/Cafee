#include "Cafer.h"

Cafe::Cafe(std::string _name) : name(_name) {}

Cafe::Cafe() : name(" ") {}

Cafe::~Cafe() {}

void Cafe::get_info() {
    std::cout << "Name: " << name << std::endl;
};