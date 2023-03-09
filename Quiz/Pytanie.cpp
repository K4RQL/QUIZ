#include <iostream>
#include <fstream>
#include <string>
#include "Pytanie.h"

using namespace std;

Pytanie::Pytanie(string nazwaPliku){ : m_nazwaPliku(nazwaPliku){}

class Pytanie {
public:
	void Pytanie::wczytajPytanie(string nazwaPliku) {
		ifstream plik(m_nazwaPliku);
		ifstream plik("quiz.txt");
		if (plik.is_open()) {
			string wiersz;
			while (getline(plik, wiersz)) {
				cout << wiersz << endl;
			}
			plik.close();
		}
	}
};