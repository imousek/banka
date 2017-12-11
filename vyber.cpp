#include <iostream>
#include <fstream>
#include <string>
#include "menu.h"
using namespace std;


int vyber(string subor)
{
	int suma,suma_ucet;
	string suma_ucet_str;
	zadajsumu:
	cout << "Zadaj sumu ktoru chces vybrat." << endl;
	cin >> suma;
	fstream x (".\\accounts\\" + subor);
	for (int i=0;i<4;i++)
		getline(x,suma_ucet_str);
	system("CLS");
	suma_ucet = stoi (suma_ucet_str);
	if (suma>suma_ucet)
		{
			cout << "Na ucte nie je dostatok penazi" << endl;
			goto zadajsumu;
		}
	else 
		{
			fstream x (".\\accounts\\" + subor);
			ofstream temp (".\\accounts\\temp.txt");
			for (int i = 0; i < 4; i++)
			{
				x >> suma_ucet_str;
				if (i == 3)
				{
					temp << to_string(stoi(suma_ucet_str) - suma) << endl;
				}
				else{
					temp << suma_ucet_str << endl;
				}
			}
			x.close();
			temp.close();
			remove((".\\accounts\\" + subor).c_str());
			rename(".\\accounts\\temp.txt", (".\\accounts\\" + subor).c_str());
			cout << "Z uctu bolo vybratych " << suma << "koruniek. Zostatok na ucte je " << suma_ucet-suma << endl;
		}
}
