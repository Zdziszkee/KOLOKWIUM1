#include <iostream>

// To jest definicja klasy. Prosze napisac konieczne deklaracje.
// Definicje funkcji umiescic w pliku klasa.cpp

class Liczba {
public:
    // Uwaga!!! prosze napisac tylko JEDEN konstruktor
    // INICJALIZUJACY skladowa n jak ponizej
    // oraz przeciazyc operatory << i >>
    Liczba(int number = 0);

    friend std::ostream &operator<<(std::ostream &out, const Liczba &liczba);

    friend std::istream &operator>>(std::istream &in, Liczba &liczba);

private:
    int n;
};

