#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    // Getterit ja setterit
    void setName(const std::string &name);
    std::string getName() const;

    void setStudentNumber(int studentNumber);
    int getStudentNumber() const;

    void setAverage(double average);
    double getAverage() const;
};

#endif // STUDENT_H
