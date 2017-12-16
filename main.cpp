#include <iostream>
#include "menu.h"
#include <thread>
#include <windows.h>

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
	menu0();	
}

/* TODO

pozicka
backspace na vratenie sa

GRAFICKE ROZHRANIE


 */
