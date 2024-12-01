#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>

Car::Car(std::string b, std::string m) : model(m), brand(b) {}

std::string Car::getModel() const {
    return model;
}

std::string Car::getBrand() const {
    return brand;
}

Engine Car::getEngine() const {
    return engine;
}

Wheel* Car::getWheels() {
    return wheels;
}

void Car::setEngine(int hp, double disp) {
    engine.setHorsepower(hp);
    engine.setDisplacement(disp);
}

void Car::setWheels(int size, std::string type) {
    for (int i = 0; i < 4; ++i) {
        wheels[i].setSize(size);
        wheels[i].setType(type);
    }
}

void Car::printDetails() {
    std::cout << "Auto: " << brand << " " << model << std::endl;
    std::cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << std::endl;

    for (int i = 0; i < 4; ++i) {
        std::cout << "Rengas " << i + 1 << ":" << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << std::endl;
    }
}
