#include "chef.h"
#include <string>
#include <iostream>

int main() {

    Chef chef("Gordon Ramsay");

    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    std::cout << "Name of the Italian Chef is: " << italianChef.getName() << std::endl;

    return 0;
}
