#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef {

public:

    Chef(const std::string& name);
    virtual ~Chef();

    void makeSalad();
    void makeSoup();

    std::string getName() const;
    std::string name;

};

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& name);
    ~ItalianChef();

    void makePasta ();
};

#endif // CHEF_H
