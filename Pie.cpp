#include "Pie.h"

Pie::Pie(std::string _type) : type(_type) {}

Pie::Pie() : type("") {}

Pie::~Pie() {}

void Pie::prepare() {
    std::cout << "Pie's preparing" << std::endl;
}

void Pie::serve() {
    std::cout << "Pie's serving" << std::endl;
};