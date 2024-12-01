#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "ClassB.h"
#include <string>

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB value);
    std::string getBinfo();
    void setBinfo(std::string value);
};

#endif // ASSOSIATIONA_H
