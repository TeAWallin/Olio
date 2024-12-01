#include "assosiationa.h"
#include <iostream>
#include "ClassB.h"
#include "AggregationA.h"

using namespace std;


int main()
{
    int a = 5;
    int b = 10;

    std::cout << "a:n arvo on; " << a << " ja osoite on: " << &a << std::endl;
    std::cout << "b:n arvo on; " << b << " ja osoite on: " << &b << std::endl;

    int* myPointer = &a;

    std::cout << "Pointterin osoittama osoite on: " << myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;

    int* myPointerB = &b;

    std::cout << "Pointterin osoittama osoite on: " << myPointerB << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointerB << std::endl;

    int& refA = a; //b:n osoite vaihtamalla a -> b

    std::cout << "refA osoittaa osoitteeseen: " << &refA << std::endl;
    std::cout << "refA osoittaman muistipaikan arvo on: " << refA << std::endl;


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}

// myPointer kertoo osoittimen osoitteen kun *myPointer kertoo muistipaikan sisällön.
// refA viittaa muistipaikan arvoon ja &refA kertoo muistipaikan sijainnin
