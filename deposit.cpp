#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int deposit(){
	int ciastka;
	cout << "Zadajte ciastku. Najmensia hodnota je 10e!" << endl;
	cin >> ciastka;
	if (ciastka < 10){
		cout << "Nespravna ciastka" << endl;
		deposit();
	}
	else {
		string cash;
		string meno_suboru = "C:/Dev-Cpp/programy/robo/banka/accounts/ucet_fajdr.txt";
		fstream x (meno_suboru.c_str());
		for (int i = 1; i <= 4; i++){
			getline(x,cash);
		}
		//line.replace(line.find(deleteline),deleteline.length(),"");
		x.seekp(x.tellg());
		cash = to_string(stoi(cash) + ciastka);
		x << cash << endl;
		return 0;
	}
}

