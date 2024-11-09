#include <iomanip>
#include <iostream>


int main()
{
    int a, b;

    //kysytään käyttäjältä luvut
    std::cout << "Anna ensimmäinen luku:";
    std::cin >> a;
    std::cout << "Anna toinen luku: ";
    std::cin >> b;

    // lasketaan annetuista luvuista summa
    int summa = a+b;
    std::cout<< summa << std::endl;

    // lasketaan annetuista luvuista osamäärä
    if (b != 0) {
        double osamaara = static_cast<double>(a) /b;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << osamaara << std::endl;
    }
    else {
        std::cout << "osamäärää ei voi laskea, jakaja on 0" << std::endl;
    }

    return 0;
}
