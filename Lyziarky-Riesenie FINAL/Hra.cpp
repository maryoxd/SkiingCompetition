#include "Hra.h"

Hra::Hra()
{
}

void Hra::nacitajZoSuboru(const char* nazovSuboru)
{
	fstream vstupnySubor(nazovSuboru);

	if (!vstupnySubor.is_open()) {
		cout << "NASTALA CHYBA PRI OTVARANI SUBORU!!! ";
	}
	else {
		string meno, priezvisko;
		int poradie = 0;
		while (vstupnySubor >> meno >> priezvisko) {
			poradie++;
			Lyziar temp(meno, priezvisko, poradie);
			temp.setUdalost(0);
			temp.nastavCas(999999);
			this->lyziarky.push_back(temp);
		}
	}
	vstupnySubor.close();
}

void Hra::vygenerujUdalosti()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(0, 100);
	for (int i = 0; i < this->lyziarky.size(); i++) {
		int nahodneC = distribution(gen);
		if (nahodneC < 11) {
			this->lyziarky[i].setUdalost(1);
		}
		else if (nahodneC > 89) {
			this->lyziarky[i].setUdalost(2);
		}
		else if (nahodneC > 46 && nahodneC < 54) {
			this->lyziarky[i].setUdalost(3);
		}
		else {
			uniform_int_distribution<int> distri(5200, 5999);
			double cas = static_cast<double>(distri(gen));

			double casDesatiny = cas / 100;
			this->lyziarky[i].nastavCas(casDesatiny);
			this->lyziarky[i].setUdalost(0);
		}
	}
}

void Hra::sortni()
{
	sort(this->lyziarky.begin(), this->lyziarky.end(), Lyziar::porovnajLyziarov);

}

void Hra::vypisLyziarov()
{
	ofstream vystupnySubor("vystup.txt");
	if (!vystupnySubor.is_open()) {
		cout << "NEPODARILO SA ZAPISAT DO SUBORU! " << endl;
	}

	int k = 0;
	for (int i = 0; i < this->lyziarky.size(); i++) {
		if (this->lyziarky[i].getUdalost() == 0) {
			if (i == 0) {
			k++;
			cout << k << ". " << this->lyziarky[i].getMeno() << " [" << this->lyziarky[i].getPoradie() << "] " << this->lyziarky[i].getCas();
			cout << endl;
			vystupnySubor << k + 1 << ". " << this->lyziarky[i].getMeno() << " [" << this->lyziarky[i].getPoradie() << "] " << this->lyziarky[i].getCas();
			vystupnySubor << endl;
			}
			else {
				double novyCas = this->lyziarky[i].getCas() - this->lyziarky[0].getCas();
				cout << k + 1 << ". " << this->lyziarky[i].getMeno() << " [" << this->lyziarky[i].getPoradie() << "] +" << novyCas;
				cout << endl;
				vystupnySubor << k + 1 << ". " << this->lyziarky[i].getMeno() << " [" << this->lyziarky[i].getPoradie() << "] +" << novyCas;
				vystupnySubor << endl;
				k++;
			}
		}
	}
	for (int m = 0; m < this->lyziarky.size(); m++) {
		if (this->lyziarky[m].getUdalost() != 0) {
			cout << k + 1 << ". " << this->lyziarky[m].getMeno() << " [" << this->lyziarky[m].getPoradie() << "] " << this->lyziarky[m].getTypUdalosti(this->lyziarky[m].getUdalost());
			cout << endl;
			k++;
			vystupnySubor << k + 1 << ". " << this->lyziarky[m].getMeno() << " [" << this->lyziarky[m].getPoradie() << "] " << this->lyziarky[m].getTypUdalosti(this->lyziarky[m].getUdalost());
			vystupnySubor << endl;
		}
	}
	vystupnySubor.close();
}

void Hra::zapisDoSuboru()
{
	
}
