#include <QObject>
#include <QDebug>
#include "myclass.h"

int main()
{
    QObject parent;

    MyClass myObject(&parent);

    myObject.raiseMySignal();

    return 0;
}
