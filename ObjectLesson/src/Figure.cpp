// Quadrato.cpp
#include "../lib/Figure.h"

Quadrato::Quadrato(double l) : lato(l) {}

double Quadrato::calcolaArea() const {
    return lato * lato;
}

double Quadrato::calcolaPerimetro() const {
    return 4 * lato;
}
