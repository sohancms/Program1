#include <iostream>
using namespace std;

int main()
{
    char charType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double doubleType;
    cout << "Size of Char        : " << sizeof(charType) << "byte" << endl;
    cout << "Size of Short       : " << sizeof(shortType) << "byte" << endl;
    cout << "Size of intType     : " << sizeof(intType) << "byte" << endl;
    cout << "Size of longType    : " << sizeof(longType) << "byte" << endl;
    cout << "Size of doubleType  : " << sizeof(doubleType) << "byte" << endl;
    return 0;
}