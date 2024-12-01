#include "animal.h"
#include "Dog.h"

int main() {

    Animal* animal = new Animal();

    animal->callOut();


    Dog* dog = new Dog();

    dog->callOut();


    delete animal;
    delete dog;

    return 0;
}
