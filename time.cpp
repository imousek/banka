#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

string current_time(){
	chrono::system_clock::time_point today = chrono::system_clock::now();
	time_t tt;
	tt = chrono::system_clock::to_time_t (today);
	string cas = ctime(&tt);
	return (cas);
}


