// uvodna obrazovka
/*
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int deposit();
int help();
void nove_heslo();
int create_acc();
void start();
int help();

int main(){
	cout << "Vitajte v najviac premakanom bankovom systeme" << endl;
	cout << "Pre pokracovanie zadajte cislo od 1-9, alebo pre pomoc zadajte help" << endl;
	start();
}

int deposit(){
	cout << "Zadajte sumu, ktoru by ste vlozit. Najmensia ciastka je 10€" << endl;
	int suma;
	cin >> suma;
	if (suma < 10){
		cout << "Zadali ste nespravnu ciastku." << endl;
		deposit();
	}
	else{
		// vlozit na ucet
	}
	
}

void nove_heslo(string heslo)
{
	string heslo2;
	cout << "Zadaj heslo" << endl;
	cin >> heslo;
	cout << "Opakuj" << endl;
	cin >> heslo2;
	if (heslo2!=heslo)
		nove_heslo(heslo);
}

int create_acc()
{
	string meno,priezvisko,heslo;
	cout << "Zadaj meno" << endl;
	getline(cin,meno);
	cout << "Zadaj priezvisko" << endl;
	getline(cin,priezvisko);
	nove_heslo(heslo);
	string meno_suboru=string("ucet_") + priezvisko + meno[0] +string(".txt");
	system("CLS");
	ofstream x (meno_suboru.c_str());
	x << meno << endl;
	x << priezvisko << endl;
	x << heslo << endl;
}

void start(){
	cout << "Cakam na vstup" << endl;
	string vstup;
	cin >> vstup;
	if (isdigit(vstup[0])){
		switch (vstup[0]){
			case '0':
				help();
				break;
			case '1':
				create_acc();
				break;
		}
	}
	else {
		cout << "nespravny vstup" << endl;
		vstup.clear();
		start();
	}
}

int help()
{
	cout << "Zadaj:" << endl;
	cout << "1. Vytvor ucet" << endl;
	cout << "2. Vlozit" << endl;
	cout << "3. Vybrat" << endl;
	cout << "5. Zobraz informacie o ucte" << endl;
	cout << "6. Zrus ucet" << endl;
	cout << "7. Informacie o urokoch" << endl;
	cout << "8. Prevody" << endl;
	start();
}
*/
