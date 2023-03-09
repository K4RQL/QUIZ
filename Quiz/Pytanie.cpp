#include "Pytanie.h"
#include <iostream>
#include <fstream>
#include <string>

Pytanie::Pytanie(std::string trescPytania, std::string odpowiedzA, std::string odpowiedzB, std::string odpowiedzC, char poprawnaOdpowiedz) :
    m_trescPytania(trescPytania), m_odpowiedzA(odpowiedzA), m_odpowiedzB(odpowiedzB), m_odpowiedzC(odpowiedzC), m_poprawnaOdpowiedz(poprawnaOdpowiedz), m_punktacja(0) {}

void Pytanie::wczytajPytanie() {
    std::cout << "Podaj tresc pytania: ";
    std::getline(std::cin, m_trescPytania);

    std::cout << "Podaj odpowiedz A: ";
    std::getline(std::cin, m_odpowiedzA);

    std::cout << "Podaj odpowiedz B: ";
    std::getline(std::cin, m_odpowiedzB);

    std::cout << "Podaj odpowiedz C: ";
    std::getline(std::cin, m_odpowiedzC);

    std::cout << "Podaj poprawna odpowiedz (A, B lub C): ";
    std::cin >> m_poprawnaOdpowiedz;

    // Czyścimy bufor wejściowy, aby usunąć znak nowej linii pozostały w strumieniu po wpisaniu odpowiedzi użytkownika.
    std::cin.ignore();
}

void Pytanie::zadajPytanie() {
    std::cout << m_trescPytania << std::endl;
    std::cout << "A) " << m_odpowiedzA << std::endl;
    std::cout << "B) " << m_odpowiedzB << std::endl;
    std::cout << "C) " << m_odpowiedzC << std::endl;
}

bool Pytanie::sprawdz(char odpowiedzUzytkownika) {
  if (odpowiedzUzytkownika == m_poprawnaOdpowiedz) {
    std::cout << "Poprawna odpowiedz!" << std::endl;
    m_punktacja++;
    return true;
}
else {
    std::cout << "Niepoprawna odpowiedz." << std::endl;
    return false;
}
}

int Pytanie::punktacja() {
return m_punktacja;
}

