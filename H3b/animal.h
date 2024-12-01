#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>


class Animal {
public:

    virtual void callOut() const {
        std::cout << "Eläin ääntelee." << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Animal tuhoutuu." << std::endl;
    }
};

#endif // ANIMAL_H
