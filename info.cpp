#include <iostream>
#include <fstream>
#include "menu.h"

using namespace std;

void info(string subor){
	system("cls");
	string udaje;
	fstream x (".\\accounts\\" + subor);
	getline(x, udaje);
	cout << "Meno: " << udaje << endl;
	getline(x, udaje);
	cout << "Priezvisko: " << udaje << endl;
	getline(x, udaje);
	cout << "Heslo: " << udaje << endl;
	getline(x, udaje);
	cout << "Stav financii: " << udaje << endl;
	getline(x, udaje);
	cout << "Ucet od: " << udaje << endl;
	cout << endl;
	x.close();
	menu1(subor);
}
