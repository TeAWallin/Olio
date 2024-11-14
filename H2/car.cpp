#include <iostream>
#include <string>
#include "car.h"
using namespace std;

void Car::printData() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year of Manufacture: " << yearModel << endl;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}
