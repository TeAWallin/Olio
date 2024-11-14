#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment {
private:
    int numOfTenants;
    int area;

public:

    Apartment(int tenants, int areaSize);
    int heatingCost();
};

#endif
