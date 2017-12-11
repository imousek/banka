#include "menu.h"
#include "help.h"
#include "create_acc.h"
#include "deposit.h"
#include "login.h"
#include "vyber.h"
#include "info.h"

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

using namespace std;

void menu0(){
	help(0);
	string vstup;
	cout << "Cakam na vstup" << endl;
	cin >> vstup;
	if (isdigit(vstup[0])){
		switch (vstup[0]){
			case '0':
				create_acc();
				break;
			case '1':
				login();
				break;
			case '9':
				help(0);
				menu0();
				break;
		}
	}
	else {
		cout << "Nepovoleny vstup" << endl;
		Sleep(1000);
		vstup.clear();
		system("cls");
		menu0();
	}
}

void menu1(string subor){
	help(1);
	string vstup;
	cout << "Cakam na vstup" << endl;
	cin >> vstup;
	if (isdigit(vstup[0])){
		switch (vstup[0]){
			case '1':
				info(subor);
				break;
			case '2':
				deposit(subor);
				break;
			case '3':
				vyber(subor);
				break;
			case '4':
				//aktivita();
				break;
			case '5':
				//vymazat();
			case '6':
				system("cls");
				cout << "Boli ste uspesne odhlaseni." << endl;
				menu0();
			case '9':
				help(1);
				menu1(subor);
				break;
		}
	}
	else {
		cout << "Nepovoleny vstup" << endl;
		vstup.clear();
		menu1(subor);
	}
}
