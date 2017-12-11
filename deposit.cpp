#include "menu.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int deposit(string subor){
	int ciastka;
	cout << "Zadajte ciastku. Najmensia hodnota je 10e!" << endl;
	cin >> ciastka;
	if (ciastka < 10){
		cout << "Nespravna ciastka" << endl;
		deposit(subor);
	}
	else {
		string cash;
		int i;
		fstream x (".\\accounts\\" + subor);
		ofstream temp (".\\accounts\\temp.txt");
		for (int i = 0; i < 4; i++){
			x >> cash;
			if (i == 3){
				temp << to_string(stoi(cash) + ciastka) << endl;
			}
			else{
				temp << cash << endl;
			}
		}
		x.close();
		temp.close();
		remove((".\\accounts\\" + subor).c_str());
		rename(".\\accounts\\temp.txt", (".\\accounts\\" + subor).c_str());
		cout << "Uspesne ste vlozili " << ciastka << endl;
		cout << "Na ucte mate teraz " << to_string(stoi(cash) + ciastka) << endl;
		Sleep(2000);
		system("cls");
		menu1(subor);
	}
}

