#ifndef PYTANIE_H
#define PYTANIE_H

#include <string>

class Pytanie {
public:
    Pytanie(std::string trescPytania, std::string odpowiedzA, std::string odpowiedzB, std::string odpowiedzC, char poprawnaOdpowiedz);
    void wczytajPytanie();
    void zadajPytanie();
    bool sprawdz(char odpowiedzUzytkownika);
    int punktacja();

private:
    std::string m_trescPytania;
    std::string m_odpowiedzA;
    std::string m_odpowiedzB;
    std::string m_odpowiedzC;
    char m_poprawnaOdpowiedz;
    int m_punktacja;
};

#endif
