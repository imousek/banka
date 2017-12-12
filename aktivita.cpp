#include "lines_in_file.h"
#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std; 

void last_activity(string subor){
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
	menu1(subor);
}

