#include <algorithm>
#include <iterator>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int lines(string subor){
	fstream x (".\\accounts\\" + subor);
	int lines_count=std::count(std::istreambuf_iterator<char>(x), std::istreambuf_iterator<char>(), '\n');
	x.clear();
	x.seekg(0, ios::beg);
	return(lines_count);
}
