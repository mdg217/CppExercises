// Quadrato.h
#ifndef QUADRATO_H
#define QUADRATO_H

class Quadrato {
private:
    double lato;

public:
    Quadrato(double l);
    double calcolaArea() const;
    double calcolaPerimetro() const;
};

#endif // QUADRATO_H
