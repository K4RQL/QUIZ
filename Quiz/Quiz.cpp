#include <iostream>
#include <fstream>
#include <string>
#include "Pytanie.h"

int main() {
    std::ifstream plik("pytania.txt");
    if (!plik) {
        std::cerr << "Nie udalo sie otworzyc pliku." << std::endl;
        return 1;
    }

    std::string linia;
    while (std::getline(plik, linia)) {
        Pytanie pytanie(linia, "", "", "", ' ');

        // Ustawiamy odpowiedzi i poprawną odpowiedź za pomocą getline z obiektu plik.
        std::getline(plik, linia);
        pytanie.m_odpowiedzA = linia;

        std::getline(plik, linia);
        pytanie.m_odpowiedzB = linia;

        std::getline(plik, linia);
        pytanie.m_odpowiedzC = linia;

        std::getline(plik, linia);
        pytanie.m_poprawnaOdpowiedz = linia[0];

        pytanie.zadajPytanie();

        char odpowiedzUzytkownika;
        std::cin >> odpowiedzUzytkownika;
        pytanie.sprawdz(odpowiedzUzytkownika);

        // Czyścimy bufor wejściowy, aby usunąć znak nowej linii pozostały w strumieniu po wpisaniu odpowiedzi użytkownika.
        std::cin.ignore();
    }

    std::cout << "Koniec gry. Twoj wynik: " << pytanie.punktacja() << " / " << iloscPytan << std::endl;

    return 0;
}
