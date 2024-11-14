#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"


int main() {
    // Vaihe 1: Car -luokka
    Car* myCar = new Car();

    //  auton tiedot
    myCar->setBrand("Skoda");
    myCar->setModel("Enyaq");
    myCar->setYearModel(2024);

    // Tulostetaan auton tiedot
    myCar->printData();

    // Vapautetaan muisti
    delete myCar;

    //Vaihe 2: Rectangle-luokka
    Rectangle* rect = new Rectangle();

    // suorakulmion leveys ja korkeus
    rect->setWidth(7.0);
    rect->setHeight(4.0);

    // Laske ja tulosta
    std::cout << "Pinta-ala: " << rect->getArea() << std::endl;
    std::cout << "Ympärysmitta: " << rect->getCircum() << std::endl;

    // Vapautetaan kekomuisti
    delete rect;

    //Vaihe 3: Student-luokka
    auto student = std::make_shared<Student>();
    student->setName("Oona Opiskelija");
    student->setStudentNumber(12345);
    student->setAverage(3.75);

    std::cout << "Student Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Student Average: " << student->getAverage() << std::endl;

    return 0;
}
