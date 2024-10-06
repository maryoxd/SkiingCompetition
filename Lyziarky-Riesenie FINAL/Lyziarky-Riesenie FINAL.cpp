// Lyziarky-Riesenie FINAL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Hra.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main(int argc, char* argv[])
{
    {
        if (argc < 2) {
            std::cout << "Nepodarilo sa spustit program! ";
            return 100;
        }
        Hra h;
        h.nacitajZoSuboru(argv[1]);
        h.vygenerujUdalosti();
        h.sortni();
        h.vypisLyziarov();
        
    }
    _CrtDumpMemoryLeaks();
}


