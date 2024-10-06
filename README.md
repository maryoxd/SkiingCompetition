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
