#include <iostream>
#include <fstream>
#include "Pytanie.h"
#include "Quiz.h"

using namespace std;

int main(){
	string nazwaPliku="quiz.txt";
	Pytanie pierwsze;
	pierwsze.wczytajPytanie(nazwaPliku);
	
	return 0;
}