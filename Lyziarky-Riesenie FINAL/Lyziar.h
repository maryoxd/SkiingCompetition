#pragma once
#include <string>
#include <iostream>

using namespace std;

class Lyziar {
private:
	string Meno;
	string Priezvisko;
	int Poradie;
	double cas;
	int Udalost;
public:
	Lyziar(string priezvisko, string meno, int poradie);
	string getMeno();
	int getPoradie();
	void setUdalost(int udal);
	int getUdalost();
	string getTypUdalosti(int udal);
	void nastavCas(double kolko);
	static bool porovnajLyziarov(Lyziar& lyziar1, Lyziar& lyziar2) {
		return lyziar1.cas < lyziar2.cas;

	}
	double getCas();
};