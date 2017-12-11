#include <iostream>
#include <fstream>
#include <string>
#include "menu.h"
using namespace std;

/*menu_suboru.c_str() zatial nefunguje, treba vymysliet ako pouzit premennu z login.cpp*/

int vyber()
{
	int suma,suma_ucet;
	string suma_ucet_str;
	zadajsumu:
	cout << "Zadaj sumu ktoru chces vybrat." << endl;
	cin >> suma;
	fstream x;
	x.open("test.txt");
	for (int i=0;i<5;i++)
		getline(x,suma_ucet_str);
	system("CLS");
	suma_ucet =stoi(suma_ucet_str);
	if (suma>suma_ucet)
		{
			cout << "Na ucte nie je dostatok penazi" << endl;
			goto zadajsumu;
		}
	else 
		{
			cout << "Z uctu bolo vybratych " << suma << "koruniek. Zostatok na ucte je " << suma_ucet-suma << endl;
			
		}
}
