#include "menu.h"
#include "time.h"
#include "lines_in_file.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;


int vyber(string subor)
{
	system("cls");
	int ciastka;
	cout << "Zadajte ciastku. Najmensia hodnota je 10e!" << endl;
	cin >> ciastka;
	if (ciastka < 10){
		cout << "Nespravna ciastka" << endl;
		vyber(subor);
	}
	else {
		string cash;
		int i, now;
		fstream x (".\\accounts\\" + subor);
		ofstream temp (".\\accounts\\temp.txt", ios::app);
		for (int i = 0; i < lines(subor)+1; i++){
			if (i == 5){
				temp << "Vyber: " << ciastka << " " << current_time();
			}
			else {
				getline(x, cash);
				if (i == 3){
					now = stoi(cash) - ciastka;
					temp << to_string(now) << endl;
				}
				else{
					temp << cash << endl;
				}
			}
		
		}
		x.close();
		temp.close();
		remove((".\\accounts\\" + subor).c_str());
		rename(".\\accounts\\temp.txt", (".\\accounts\\" + subor).c_str());
		cout << "Uspesne ste vybrali " << ciastka << endl;
		cout << "Na ucte mate teraz " << now << endl;
		Sleep(2000);
		system("cls");
		menu1(subor);
	}
}
