#include "help.h"
#include <iostream>

using namespace std;

void help(int i){
	switch (i){
		case 0:
			cout << "0. Vytvorit ucet" << endl;
			cout << "1. Prihlasit sa do existujuceho uctu" << endl;
			break;
		case 1:
			cout << "1. Zobrazit informacie o ucte" << endl;
			cout << "2. Vlozit ciastku" << endl;
			cout << "3. Vybrat ciastku" << endl;
			cout << "4. Zobrazit aktivitu na ucte" << endl;
			cout << "5. Zrusit ucet" << endl;
			break;
	}
}
