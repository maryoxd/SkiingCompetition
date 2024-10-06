[SK]
Simulačná hra lyžiarov
Tento projekt je C++ simuláciou lyžiarskych pretekov. Hráči (lyžiari) sa čítajú zo vstupného súboru a každému lyžiarovi je náhodne priradený výsledok, ktorým môže byť čas dokončenia pretekov alebo špeciálna udalosť (napr. diskvalifikácia). Výsledky sa zoradia a konečný rebríček sa uloží do súboru a vytlačí sa do konzoly.

Štruktúra projektu
Hra pozostáva z dvoch hlavných tried:

Lyziar: Predstavuje lyžiara, ukladá jeho meno, poradie a výsledky (čas alebo špeciálna udalosť).
Hra: Spravuje celkovú simuláciu vrátane načítania lyžiarov zo súboru, generovania náhodných výsledkov, triedenia a výstupu výsledkov.

Popisy tried

Lyziar
Vlastnosti:
Priezvisko: Priezvisko lyžiara.
Meno: Krstné meno lyžiara.
Poradie: Poradie štartu lyžiara.
Udalost: Kód udalosti (0 pre normálne preteky, 1 pre diskvalifikáciu, 2 pre „Nedokončil“, 3 pre nehodu).
cas: Čas dokončenia lyžiara (v sekundách).
Metódy:
Lyziar(string priezvisko, string meno, int poradie): Konštruktor, ktorý inicializuje lyžiara menom a poradím štartu.
getMeno(): Vráti celé meno lyžiara.
getPoradie(): Vráti poradie štartu lyžiara.
setUdalost(int udal): Nastavuje kód udalosti (0 pre normálne, 1 pre DSQ atď.).
getUdalost(): Vráti kód udalosti.
getTypUdalosti(int udal): Vráti reťazcovú reprezentáciu udalosti ("DSQ", "DNF" atď.).
nastavCas(dvojité kolko): Nastavuje čas lyžiara.
getCas(): Vráti čas lyžiara.

Hra
Vlastnosti:
lyziarky: Zoznam lyžiarov (objektov Lyziar) súťažiacich v simulácii.
Metódy:
Hra(): Konštruktor, ktorý inicializuje hru.
nacitajZoSuboru(const char* nazovSuboru): Číta mená lyžiarov a inicializuje ich údaje o pretekoch zo vstupného súboru.
vygenerujUdalosti(): Náhodne generuje výsledky pre každého lyžiara. Niektorí lyžiari môžu byť diskvalifikovaní, nedokončia alebo havarujú, zatiaľ čo iní dosiahnu čas medzi 52,00 a 59,99 sekundy.
sortni(): Triedi lyžiarov na základe ich časov dokončenia.
vypisLyziarov(): Výstup zoradených výsledkov do konzoly a do súboru. Časy lyžiarov sú zobrazené vzhľadom na víťaza a špeciálne udalosti sú označené (DSQ, DNF atď.).
Ako funguje simulácia
Hra načítava mená lyžiarov z textového súboru.
Pre každého lyžiara sa náhodne vygeneruje výsledok:
Diskvalifikovaný (DSQ)
Nedokončené (DNF)
Zlyhanie (DNF!)
Skončil s časom medzi 52,00 a 59,99 sekundami
Lyžiari sú zoradení podľa času a výsledky sú vytlačené na konzole, pričom víťaz je uvedený ako prvý. Všetky časy sú zobrazené ako rozdiely od času víťaza.
Špeciálni lyžiari sú uvedení na konci zoznamu s označením podujatia (DSQ, DNF atď.).
Výsledky sa uložia aj do výstupného súboru s názvom vystup.txt.

Budúce vylepšenia
Pridajte funkcie na zvládnutie viacerých kôl.
Implementujte rôzne úrovne obtiažnosti pre udalosti.
Zahrňte dynamickejšie generovanie udalostí na simuláciu rôznych podmienok pretekov.

[EN]
Skiers Simulation Game
This project is a C++ simulation of a skiing competition. Players (skiers) are read from an input file, and each skier is randomly assigned a result, which could be a race completion time or a special event (e.g., disqualification). The results are sorted, and the final leaderboard is saved to a file and printed to the console.

Project Structure
The game consists of two main classes:

Lyziar: Represents a skier, storing their name, order, and results (time or special event).
Hra: Manages the overall simulation, including loading skiers from a file, generating random results, sorting, and outputting the results.

Class Descriptions

Lyziar
Attributes:
Priezvisko: Skier's last name.
Meno: Skier's first name.
Poradie: The skier's start order.
Udalost: Event code (0 for normal race, 1 for disqualification, 2 for "Did Not Finish", 3 for crash).
cas: Skier's completion time (in seconds).
Methods:
Lyziar(string priezvisko, string meno, int poradie): Constructor that initializes a skier with a name and start order.
getMeno(): Returns the full name of the skier.
getPoradie(): Returns the skier's start order.
setUdalost(int udal): Sets the event code (0 for normal, 1 for DSQ, etc.).
getUdalost(): Returns the event code.
getTypUdalosti(int udal): Returns a string representation of the event ("DSQ", "DNF", etc.).
nastavCas(double kolko): Sets the skier's time.
getCas(): Returns the skier's time.

Hra
Attributes:
lyziarky: A list of skiers (Lyziar objects) competing in the simulation.
Methods:
Hra(): Constructor that initializes the game.
nacitajZoSuboru(const char* nazovSuboru): Reads skiers' names and initializes their race data from an input file.
vygenerujUdalosti(): Randomly generates results for each skier. Some skiers might be disqualified, not finish, or crash, while others get a time between 52.00 and 59.99 seconds.
sortni(): Sorts the skiers based on their completion times.
vypisLyziarov(): Outputs the sorted results to the console and to a file. Skier times are displayed relative to the winner, and special events are labeled (DSQ, DNF, etc.).
How the Simulation Works
The game loads skiers' names from a text file.
For each skier, a result is generated randomly:
Disqualified (DSQ)
Did Not Finish (DNF)
Crash (DNF!)
Finished with a time between 52.00 and 59.99 seconds
The skiers are sorted by time, and the results are printed to the console, with the winner listed first. All times are displayed as differences from the winner's time.
Special event skiers are shown at the end of the list with their event label (DSQ, DNF, etc.).
The results are also saved to an output file called vystup.txt.

Future Improvements
Add functionality to handle multiple rounds.
Implement different difficulty levels for event occurrences.
Include more dynamic event generation to simulate different race conditions.
