#ifndef DOG_H
#define DOG_H

#include "animal.h"

// Dog-luokka perii Animal-luokan
class Dog : public Animal {
public:

    void callOut() const override {
        std::cout << "Koira haukkuu!" << std::endl;
    }

    ~Dog() {
        std::cout << "Dog tuhoutuu." << std::endl;
    }
};

#endif // DOG_H
