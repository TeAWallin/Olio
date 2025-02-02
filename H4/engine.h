#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(int hp = 0, double disp = 0.0);

    int getHorsepower() const;
    double getDisplacement() const;

    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif // ENGINE_H
