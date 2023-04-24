#include "klasa.h"


Litera::Litera(char c) : lit(c) {}

Litera::Litera(const Litera& c) : lit(c.lit) {}

Litera& Litera::operator=(const Litera& c) {
    if (this != &c) {
        lit = c.lit;
    }
    return *this;
}