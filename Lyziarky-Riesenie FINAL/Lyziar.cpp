#include "Lyziar.h"

Lyziar::Lyziar(string priezvisko,string meno, int poradie)
{
	this->Priezvisko = priezvisko;
	this->Meno = meno;
	this->Poradie = poradie;
}

string Lyziar::getMeno()
{
	string meno = this->Meno + " " + this->Priezvisko;
	return meno;
}

int Lyziar::getPoradie()
{
	return this->Poradie;
}

void Lyziar::setUdalost(int udal)
{
	this->Udalost = udal;
}

int Lyziar::getUdalost()
{
	return this->Udalost;
}

string Lyziar::getTypUdalosti(int udal)
{
	switch (udal) {
	case 0:
		return "";
	case 1:
		return "DSQ";
	case 2:
		return "DNF";
	case 3:
		return "DNF!";
	default:
		return "";

	}
}

void Lyziar::nastavCas(double kolko)
{
	this->cas = kolko;
}

double Lyziar::getCas()
{
	return this->cas;
}
