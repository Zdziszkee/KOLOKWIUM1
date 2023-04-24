// Napisz kod, ktory wyznacza statystyke czestosci wystepowania 
// danej litery alfabetu w obiekcie std::string i wypisuje 5 o najwiekszej 
// czestosci wystepowania, a jesli czestosc jest taka sama, to wybierze te
// o nizszym kodzie ASCII. Litery wielkie i male traktowac tak samo!
// *** 2 pkt ***
#include <string>
#include <map>
#include "iostream"
void printStringStatistics(std::string &str){
    std::transform(str.begin(), str.end(), str.begin(), ::tolower); // zamień na małe litery
    std::map<char, int> freq; // mapa liter i ich częstości
    for (char c : str) {
        if (std::isalpha(c)) { // sprawdź, czy to litera alfabetu
            freq[c]= freq[c]+1;
        }
    }
    std::cout << "5 liter o najwiekszej czestosci wystepowania:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        int max_freq = 0;
        char max_char = 'a';

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > max_freq) {
                max_freq = it->second;
                max_char = it->first;
            } else if (it->second == max_freq && it->first < max_char) {
                max_char = it->first;
            }
        }

        std::cout << max_char << ": " << max_freq << std::endl;

        freq.erase(max_char); // usuń literę z mapy
    }

}
int main() {
	// wykorzystaj ponizsze obiekty std::string do wypisania wynikow
	std::string s1  = "The quick brown fox jumps over a lazy dog";
	std::string s2 ="Abrakadabra adres biszkopt zadanie";
	std::string s3 = "ASTEROIDA przeleciala niedaleko Ziemi i sie rozbila na Ksiezycu";

    printStringStatistics(s1);
    std::cout<<"======================="<<std::endl;

    printStringStatistics(s2);
    std::cout<<"======================="<<std::endl;

    printStringStatistics(s3);
    std::cout<<"======================="<<std::endl;


}

