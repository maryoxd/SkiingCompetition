#pragma once
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
#include "Lyziar.h"
#include <fstream>

class Hra {
private:
	vector<Lyziar> lyziarky;
public:
	Hra();
	void nacitajZoSuboru(const char* nazovSuboru);
	void vygenerujUdalosti();
	void sortni();
	void vypisLyziarov();
	void zapisDoSuboru();
};