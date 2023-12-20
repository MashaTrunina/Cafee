#include "Tea.h"

Tea::Tea(std::string _type) : type(_type) {}

Tea::Tea() : type("") {}

Tea::~Tea() {}

void Tea::prepare() {
    std::cout << "Tea's preparing" << std::endl;
}

void Tea::serve() {
    std::cout << "Tea's serving" << std::endl;
};