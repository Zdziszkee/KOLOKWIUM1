// Ponizej podana jest tablica znakow t, zainicjalizowana kilkoma wartosciami.
// 1) Utworz obiekt std::string i za pomoca konstruktora zainicjalizuj go 
// (jeszcze raz podkreslam: zainicjalizuj) zawartoscia tej tablicy
// 2) Nastepnie za pomoca iteratora strumienia wyjsciowego ostream_iterator oraz 
// funkcji copy wypisz zawartosc tego obiektu literka po literce na ekran, 
// przedzielajac kazda literke przecinkiem ",".
// *** 1 pkt *** 

#include <string>
#include <iostream>
int main() {
    char t[] = {'f', 'e', 'y', 's', 'w', 'h', 'o', 'p', 'r', 'a'};

    std::string string(t,10);
    std::copy(string.begin(), string.end(), std::ostream_iterator<char>(std::cout, ","));

}

