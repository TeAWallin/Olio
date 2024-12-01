#include <iostream>
using namespace std;


class Apartment {
private:
    int numOfTenants;
    int area;

public:

    Apartment(int tenants, int areaSize)
        : numOfTenants(tenants), area(areaSize) {}


    int heatingCost() {
        return numOfTenants * area;
    }
};

int main() {

    int tenants = 3;
    int areaSize = 80;

    Apartment myApartment(tenants, areaSize);


    cout << "Heating cost for the apartment: " << myApartment.heatingCost() << endl;

    return 0;
}
