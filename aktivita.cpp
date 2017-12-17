#include "lines_in_file.h"
#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std; 

static bool first = true;

void last_activity(string subor){
	ChangeCursorStatus(false);
	do {
		for (; first; first = false){
			system("cls");
			string veta;
			fstream x (".\\accounts\\" + subor);
			cout << "Aktivita na ucte bola nasledovna: " << endl;
			for (int i = 0; i < lines(subor); i++){
				getline(x, veta);
				if (i > 4){
					cout << veta << endl;
				}
			}
			x.close();
		}	
	}
	while(GetAsyncKeyState(VK_BACK)==0);
	first = true;
	system("cls");
	menu1(subor);
}

