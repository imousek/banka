#include <iostream>
#include <fstream>
using namespace std;
bool is_file_exist(string meno_suboru)
{
    ifstream x((".\\accounts\\" + meno_suboru).c_str());
    return x.good();
}
