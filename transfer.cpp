#include <iostream>
#include "vyber.h"
#include "deposit.h"
#include "isfileexist.h"
#include "menu.h"
#include "windows.h"

using namespace std;

void transfer(string subor){
	string meno, priezvisko;
	cout << "Chystate sa preniest zo svojho uctu peniaze na iny. Zadajte meno a priezvisko ineho uctu." << endl;
	cin >> meno >> priezvisko;
	string meno_suboru= string("ucet_") + priezvisko + meno[0] +string(".txt");
	if(!is_file_exist(meno_suboru))
		{
			cout << "Ucet nenajdeny. Budete presmerovany do menu." << endl;
			Sleep(2000);
			system("cls");
			menu1(subor);			
	}
	else{
		int ciastka;
		cout << "Zadajte ciastku..." << endl;
		cin >> ciastka;
		final_vyber(ciastka, subor, 1);
		final_deposit(ciastka, meno_suboru, 1);
		cout << "Prevod bol uspesny." << endl;
		Sleep(2000);
		system("cls");
		menu1(subor);		
	}
}
