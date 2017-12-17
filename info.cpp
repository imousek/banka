#include <iostream>
#include <fstream>
#include <windows.h>
#include "menu.h"

using namespace std;

static bool first = true;

void info(string subor){
	ChangeCursorStatus(false);
	do {
		for (; first; first = false){
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
		}
	} while (GetAsyncKeyState(VK_BACK)==0);
	system("cls");
	first = true;
	menu1(subor);
}
