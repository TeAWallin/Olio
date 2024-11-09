#include <iomanip>
#include <iostream>

/*void  calcSum(int a, int b) {
    int summa = a + b;
    std::cout << summa << std::endl;
}

void calcDiv(int a, int b) {
    if(b != 0){
        double osamaara = static_cast<double>(a)/b; //muutetaan a doubleksi
        std::cout << std::fixed << std::setprecision(2); // desimaalien määrä
        std::cout << osamaara << std::endl; //tulosta osamäärä
    }
    else {
        std::cout << "Osamäärää ei voi laskea, koska jakaja on 0" << std::endl;
    }
}*/

int retSum(int a, int b){
    return a +b;
}

float retDiv(int a, int b) {
    if (b != 0){
        return static_cast<float>(a)/b;
    }
    else {
        std::cout << "Osamäärää ei voi laskea, koska jakaja on 0" << std::endl;
        return 0;
    }
}

int main()
{
    int a, b;

    //kysytään käyttäjältä luvut
    std::cout << "Anna ensimmäinen luku:";
    std::cin >> a;
    std::cout << "Anna toinen luku: ";
    std::cin >> b;


    /* lasketaan annetuista luvuista summa
    int summa = a+b;
    std::cout<< summa << std::endl;*/

    // lasketaan annetuista luvuista osamäärä
    /*if (b != 0) {
        double osamaara = static_cast<double>(a) /b;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << osamaara << std::endl;
    }
    else {
        std::cout << "osamäärää ei voi laskea, jakaja on 0" << std::endl;
    }*/

    //kutsutaan funktiot laskutoimituksia varten
    /*calcSum(a, b);
    calcDiv(a, b);*/

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    return 0;
}
