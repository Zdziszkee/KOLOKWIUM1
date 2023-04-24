// W programie mamy tablice std::array dla typu int. 
// Typ std::array ma skladowe metody takie jak begin(), end() czy size().
// Napisz nizej wymienione rodzaje petli przebiegajacych
// po calym zakresie tablicy i wypisujacych jej zawartosc na ekran. 
// Powinny to byc: 
// 1) petla for "po calym zakresie" (range-based loop)
// 2) petla while
// 3) petla z pomoca iteratorow, czyli auto it = tab.begin() etc.
// *** 1 pkt ***

#include <array>
#include <iostream>

int main()
{
	// to jest obiekt tab, ktory ma byc uzyty
	std::array<int, 7> tab = { -3, -5, 0, 7, 9, 4, 1 };

    for (auto &element : tab){
        std::cout << element << " ";
    }
    std::cout<<std::endl;

    unsigned long index = 0;
    while (index<tab.size()){
        std::cout << tab[index] << " ";
        index++;
    }
    std::cout<<std::endl;

    for (auto it = tab.begin(); it != tab.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout<<std::endl;


}