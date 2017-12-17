#include <iostream>
#include "menu.h"
#include <thread>
#include <windows.h>
#include <conio.h>

using namespace std;

DWORD WINAPI CheckEscape(LPVOID lpParam) {
        while(GetAsyncKeyState(VK_ESCAPE)==0){
            Sleep(10);
        }
        exit(0);
}


int main(){
	cout << "Vitajte v najviac premakanom bankovom systeme" << endl;
	cout << "Ak potrebujete pomoc, zadajte 9" << endl;
	CreateThread(NULL, 0, CheckEscape,NULL, 0, NULL);
	cout << "Pre pokracovanie stlacte hocijaky klaves okrem esc." << endl;
	getch();
	menu0();	
}

/* TODO

pozicka
backspace na vratenie sa
prerobit help teraz je useless
GRAFICKE ROZHRANIE


 */
