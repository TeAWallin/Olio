#include "student.h"


void Student::setName(const std::string &name) {
    this->name = name;
}

std::string Student::getName() const {
    return name;
}

void Student::setStudentNumber(int studentNumber) {
    this->studentNumber = studentNumber;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

void Student::setAverage(double average) {
    this->average = average;
}

double Student::getAverage() const {
    return average;
}
