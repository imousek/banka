#include "menu.h"
#include "help.h"
#include "create_acc.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void menu(int cislo_menu){
	switch (cislo_menu){
		case 0:
			menu0();
			break;
		case 1:
			menu1();
			break;
	}
}

void menu0(){
	string vstup;
	cout << "Cakam na vstup" << endl;
	cin >> vstup;
	if (isdigit(vstup[0])){
		switch (vstup[0]){
			case '0':
				create_acc();
				break;
			case '1':
				//login();
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

void menu1(){
	string vstup;
	cout << "Cakam na vstup" << endl;
	cin >> vstup;
	if (isdigit(vstup[0])){
		switch (vstup[0]){
			case '0':
				create_acc();
				break;
			case '1':
				//login();
				break;
			case '9':
				help(1);
				menu1();
				break;
		}
	}
	else {
		cout << "Nepovoleny vstup" << endl;
		vstup.clear();
		menu1();
	}
}
