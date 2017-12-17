#include "menu.h"
#include "help.h"
#include "create_acc.h"
#include "deposit.h"
#include "login.h"
#include "vyber.h"
#include "info.h"
#include "aktivita.h"
#include "delete_acc.h"
#include "transfer.h"
#include "kurzor.h"

#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>

using namespace std;

#define normal_color 15
#define changed_color 8

string Menu0[4] = {"0. Vytvorit ucet", "1. Prihlasit sa do existujuceho uctu", "2. Pomoc", "3. Exit"};
string Menu1[8] = {"1. Zobrazit informacie o ucte", "2. Vlozit ciastku", "3. Vybrat ciastku", "4. Zobrazit aktivitu na ucte", "5. Zrusit ucet", "6. Prevod na iny ucet", "7. Odhlasit sa", "8. Exit"};
int zvyraz = 0, zvyraz2 = 0;
char key;

void menu0(){
	ChangeCursorStatus(false);
	while (true){
		system("cls");
		for (int i = 0; i < 4; ++i){
			if (i == zvyraz){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), changed_color);
				cout << Menu0[i] << endl;
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), normal_color);
				cout << Menu0[i] << endl;
			}
		}
		key = getch();
		switch (key){
			case '\r': // enter
				ChangeCursorStatus(true);
				switch (zvyraz){
					case 0:
						create_acc();
						break;
					case 1:
						login();
						break;
					case 2:
						help(0);
						Sleep(2000);
						menu0();
						break;
					case 3:
						system("cls");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), normal_color);
						cout << "Bye bye" << endl;
						exit(0);
						break;	
				}	
			break;
			case 'H': // hore
				zvyraz -= 1;
				if (zvyraz == -1){
					zvyraz = 3;
				}
				break;
			case 'P': // dole
				zvyraz += 1;
				if (zvyraz == 4){
					zvyraz = 0;
				}
				break;
			default:
				break;
		}
		Sleep(100);
	}
}

void menu1(string subor){
	ChangeCursorStatus(false);
	while (true){
		system("cls");
		for (int i = 0; i < 8; ++i){
			if (i == zvyraz2){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), changed_color);
				cout << Menu1[i] << endl;
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), normal_color);
				cout << Menu1[i] << endl;
			}
		}
		key = getch();
		switch (key){
			case '\r': // enter
				ChangeCursorStatus(true);
				switch (zvyraz2){
					case 0:
						info(subor);
						break;
					case 1:
						deposit(subor);
						break;
					case 2:
						vyber(subor);
						break;
					case 3:
						last_activity(subor);
						break;	
					case 4:
						delete_acc(subor);
						break;
					case 5:
						transfer(subor);
						break;
					case 6:
						system("cls");
						cout << "Boli ste uspesne odhlaseny." << endl;
						menu0();
					case 7:
						system("cls");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), normal_color);
						cout << "Bye bye" << endl;
						exit(0);
						break;
				}
			break;
			case 'H': // hore
				zvyraz2 -= 1;
				if (zvyraz2 == -1){
					zvyraz2 = 7;
				}
				break;
			case 'P': // dole
				zvyraz2 += 1;
				if (zvyraz2 == 8){
					zvyraz2 = 0;
				}
				break;
			default:
				break;
		}
		Sleep(100);
	}
}

