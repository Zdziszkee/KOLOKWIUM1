#include "klasa.h"

// tu mozna napisac na przyklad definicje operatorow << i >>
// i konstruktora (o ile nie w klasie)

Liczba::Liczba(int number) : n(number) {}

std::ostream &operator<<(std::ostream &out, const Liczba &liczba) {
    out << liczba.n;
    return out;
}

std::istream &operator>>(std::istream &in, Liczba &liczba) {
    in >> liczba.n;
    return in;
}