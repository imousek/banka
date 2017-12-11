#include <iostream>
#include <fstream>
#include <string>
#include "login.h"
#include "menu.h"
using namespace std;
int login()
{
	string meno, priezvisko,heslo,temp,opak;
	cout << "Zadaj meno" << endl;
	cin >> meno;
	system("CLS");
	cout << "Zadaj priezvisko" << endl;
	cin >> priezvisko;
	system("CLS");
	string meno_suboru=string("ucet_") + priezvisko + meno[0] +string(".txt");
	ifstream x;
	x.open(meno_suboru.c_str());
	for (int i=1;i<4;i++)
		getline(x,heslo);
	system("CLS");
	zadaj_heslo: cout << "Zadaj heslo" << endl;
	cin >> temp;
	system("CLS");
	if (temp==heslo)
		{
			menu(1);	
		}
	else
		{
			cout << "Zadane heslo je nespravne. Opakovat? ano/nie" << endl;
			cin >> opak;
			if (opak == "ano")
				goto zadaj_heslo;
			else
				menu(0);
		}
}
