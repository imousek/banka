#include "create_acc.h"
#include "time.h"
#include "menu.h"
#include "isfileexist.h"

#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

// heslo ako hviezdicky

using namespace std;

string nove_heslo()
{
	string heslo, heslo2;
	cout << "Zadaj heslo" << endl;
	cin >> heslo;
	cout << "Opakuj" << endl;
	cin >> heslo2;
	if (heslo2!=heslo)
		nove_heslo();
	return heslo;
}


void create_acc()
{
	system("cls");
	string meno,priezvisko;
	cout << "Zadaj meno" << endl;
	cin >> meno;
	cout << "Zadaj priezvisko" << endl;
	cin >> priezvisko;
	string meno_suboru= string("ucet_") + priezvisko + meno[0] +string(".txt");
	if(is_file_exist(meno_suboru))
		{
			cout << "Ucet uz existuje" << endl;
			Sleep(2000);
			create_acc();
		}
	system("CLS");
	string heslo = nove_heslo();
	system("CLS");
	ofstream x ((".\\accounts\\" + meno_suboru).c_str());	
	x << meno << endl;
	x << priezvisko << endl;
	x << heslo << endl;
	x << 0 << endl;
	x << current_time() << endl;	
	x.close();
	cout << "Ucet bol uspesne vytvoreny, prihlasovacie udaje boli zaslane na mail." << endl;
	Sleep(3000);
	system("CLS");
	menu0();
}
