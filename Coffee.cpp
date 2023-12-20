#include "Coffee.h"

Coffee::Coffee(std::string _name) : name(_name) {}

Coffee::Coffee() : name("") {}

Coffee::~Coffee() {}

void Coffee::prepare() {
    std::cout << "Coffee's preparing" << std::endl;
}

void Coffee::serve() {
    std::cout << "Coffee's serving" << std::endl;
};