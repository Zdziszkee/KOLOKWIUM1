// Napisz kod, ktory wczyta jako parametr uruchomienia lancuch znakowy np.
// prog.exe "1, 2, 3: A teraz przystapimy do testow..."
// i wpisze go na ekran po zamianie na wielkie litery
// *** 1 pkt ***

#include "string"

int main(int argc, char **argv) {
    if (argc != 2)perror("wrong number of arguments");
        std::string word = argv[1];
        unsigned long length = word.length();
        for (int j = 0; j < length; ++j) {
            putchar(toupper(word[j]));
        }

}
