// Uzupelnij deifnicje konstruktora klasy A, inicjalizujacego (!!!) skladowa s.
// Napisz definicje operatora konwersji do takiego typu, zeby funkcja fun oraz
// program dzialaly.
// *** 1 pkt ***

#include <iostream>

class A {
public:
    A(const char *arg)
            : s(arg)
    {}

    explicit operator const char*() const {
        return s.c_str();
    }
private:
    std::string s;
};

// ------ ponizej nic nie zmieniamy ------

void fun(char const *ptr) {
    std::cout << "aaa: " << ptr << std::endl;
}


int main() {
    A aaa("Nalezy zobaczyc ten tekst");
    fun(aaa);
}

