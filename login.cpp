#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "login.h"
#include "menu.h"
#include "help.h"
#include "isfileexist.h"

using namespace std;

string temp;

int login()
{
	string meno, priezvisko,heslo,opak;
	system("CLS");
	cout << "Zadaj meno" << endl;
	cin >> meno;
	system("CLS");
	cout << "Zadaj priezvisko" << endl;
	cin >> priezvisko;
	system("CLS");
	string meno_suboru=string("ucet_") + priezvisko + meno[0] +string(".txt");
	if(!is_file_exist(meno_suboru))
		{
			cout << "Ucet neexistuje" << endl;
			Sleep(2000);
			login();
		}
	ifstream x((".\\accounts\\" + meno_suboru).c_str());
	for (int i=1;i<4;i++)
		getline(x,heslo);
	system("CLS");
	zadaj_heslo: cout << "Zadaj heslo" << endl;
	cin >> temp;
	system("CLS");
	if (temp==heslo)
		{
			cout << "Boli ste uspesne prihlaseny" << endl;
			x.close();
			menu1(meno_suboru);	
		}
	else
		{
			cout << "Zadane heslo je nespravne. Opakovat? ano/nie" << endl;
			cin >> opak;
			if (opak == "ano")
				goto zadaj_heslo;
			else
				menu0();
		}
}
