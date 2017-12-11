#include "create_acc.h"
#include "menu.h"
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

#include <chrono>
#include <ctime>

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
	string meno,priezvisko;
	cout << "Zadaj meno" << endl;
	cin >> meno;
	cout << "Zadaj priezvisko" << endl;
	cin >> priezvisko;
	string heslo = nove_heslo();
	string meno_suboru= ".\\accounts\\" + string("ucet_") + priezvisko + meno[0] +string(".txt");
	system("CLS");
	ofstream x (meno_suboru.c_str());	
	x << meno << endl;
	x << priezvisko << endl;
	x << heslo << endl;
	x << 0 << endl;/*
	chrono::system_clock::time_point today = chrono::system_clock::now();
	time_t tt;
	tt = chrono::system_clock::to_time_t ( today );
	x << ctime(&tt) << endl;	*/
	x.close();
	cout << "Ucet bol uspesne vytvoreny, prihlasovacie udaje boli zaslane na mail." << endl;
	Sleep(3000);
	system("CLS");
	menu0();
}
