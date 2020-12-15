#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("read.txt");
    file << "Welcome the new world\n";
    file.close();
    return 0;
}