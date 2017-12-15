#include <iostream>
#include "delete_acc.h"
#include "menu.h"
#include "login.h"
#include "windows.h"

using namespace std;

void delete_acc(string subor){
	char go_on;
	cout << "Chystate sa vymazat svoj ucet. Chcete pokracovat? Y/N" << endl;
	cin >> go_on;
	if (go_on == 'n' || go_on == 'N'){
		system("cls");
		menu1(subor);
	}
	else if (go_on == 'y' || go_on == 'Y'){
		cout << "Pre potvrdenie vymazania zadajte svoje heslo." << endl;
		string heslo;
		cin >> heslo;
		if (heslo == temp){
			remove((".\\accounts\\" + subor).c_str());
			cout << "Ucet bol uspesne vymazany. Budete presmerovany na hlavnu stranku." << endl;
			Sleep(2000);
			system("cls");
			menu0();
		}
		else {
			cout << "Zadane heslo je nespravne. Budete automaticky odhlaseni z uctu." << endl;
			Sleep(2000);
			system("cls");
			menu0();
		}
	}
	else {
		cout << "Nepovoleny vstup!" << endl;
		Sleep(1000);
		system("cls");
		delete_acc(subor);
	}
}
