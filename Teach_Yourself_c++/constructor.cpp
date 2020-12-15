#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    string s;
    student(int x, double y, string z) //paramitarize Constructor function that is used to initialize the object
    {
        id = x;
        gpa = y;
        s = z;
    }
    void display() //Here create a function to print  the same things in the main function
    {
        cout << "\nN0ame : " << s << "\nID : " << id << "\nGPA is :" << gpa << endl;
    }
};

int main()
{ //here object is initialized by constructor function
    student obsohan(20111102, 4.50, "SOHAN"), obsumona(20111103, 4.90, "SUMONA"), obshila(20111103, 3.50, "SHILA"), obshanta(20111104, 2.50, "SHANTA");
    obsohan.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obsumona.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshila.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshanta.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/
    cout << endl;
    return 0;
}
//constructor is a special type of function that is used to initialize the object
//constructor has the same name as that of the class it begin
//it has no return type not even void
//it is called automacilly
//two type of constructor : defalt constructor and paramitarize constructor