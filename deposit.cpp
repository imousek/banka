#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int deposit(string subor){
	int ciastka;
	cout << "Zadajte ciastku. Najmensia hodnota je 10e!" << endl;
	cin >> ciastka;
	if (ciastka < 10){
		cout << "Nespravna ciastka" << endl;
		deposit(subor);
	}
	else {
		string cash;
		ifstream x (".\\accounts\\" + subor);
		for (int i = 1; i <= 4; i++){
			getline(x,cash);
		}
		//line.replace(line.find(deleteline),deleteline.length(),"");
		//x.seekp(x.tellg());
		//x.replace(cash, to_string(stoi(cash) + ciastka))
		//cash = to_string(stoi(cash) + ciastka);
		//x << cash << endl;
		return 0;
	}
}

