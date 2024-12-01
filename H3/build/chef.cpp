#include "chef.h"
#include <string>
#include <iostream>

Chef::Chef(const std::string& name) :name(name) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
std::string Chef::getName() const {
        return name;
    }

ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
    }

ItalianChef::~ItalianChef() {
        std::cout << "ItalianChef " << name << " destruktori" << std::endl;
        }
void ItalianChef::makePasta() {
        std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
    }

