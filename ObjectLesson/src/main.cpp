// main.cpp
#include <iostream>
#include "../lib/Figure.h"

int main() {
    double latoQuadrato;
    
    std::cout << "Inserisci il lato del quadrato: ";
    std::cin >> latoQuadrato;

    Quadrato quadrato(latoQuadrato);

    std::cout << "Area del quadrato: " << quadrato.calcolaArea() << std::endl;
    std::cout << "Perimetro del quadrato: " << quadrato.calcolaPerimetro() << std::endl;

    return 0;
}
