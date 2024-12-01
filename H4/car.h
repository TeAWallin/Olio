#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    std::string model;
    std::string brand;

public:
    Car(std::string b, std::string m);

    std::string getModel() const;
    std::string getBrand() const;
    Engine getEngine() const;
    Wheel* getWheels();

    void setEngine(int hp = 150, double disp = 2.0);
    void setWheels(int size = 17, std::string type = "kesarengas");
    void printDetails();
};

#endif // CAR_H
