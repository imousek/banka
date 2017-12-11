#include <iostream>
#include <windows.h>
#include "menu.h"
#include "deposit.h"

using namespace std;

int main(){
	int i = 0; // na help
	
	cout << "Vitajte v najviac premakanom bankovom systeme" << endl;
	cout << "Ak potrebujete pomoc, zadajte 9" << endl;
	Sleep(2000);	
	menu0();
	
}

/* TODO
1. create acc
2. login
3. info o ucte - zo suboru meno, priezvisko, kedy bol ucet zalozeny, stav uctu;
4. deposit 
5. vyber
6. aktivita na ucte - zapisovat kazdy vyber a prihlasenie do time logu
7. zmazat ucet - malo by byt ez len subor vymazes - vypytat znova heslo ako potvrdenie 

x. Menu po logine
y. Help pre kazdu kategoriu zvlast, malo by byt ez.


GRAFICKE ROZHRANIE


 */
