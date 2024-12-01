#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value):objectB(value)
{
}

std::string AssosiationA::getBinfo()
{
    return objectB.getInfo();
}

void AssosiationA::setBinfo(std::string value)
{
    objectB.setInfo(value);
}
