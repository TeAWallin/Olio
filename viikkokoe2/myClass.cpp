#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
private:
    int number1;       // Yksityinen muuttuja
    int number2;       // Yksityinen muuttuja

public:
    int result;        // Julkinen muuttuja

    // Oletusrakentaja
    myClass();

    // Laskee tuloksen ja palauttaa sen
    int calculateResult();

    // Asettaa number1-muuttujan arvon
    void setNumber1(int value);

    // Asettaa number2-muuttujan arvon
    void setNumber2(int value);
};

#endif // MYCLASS_H
