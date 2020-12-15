#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    string s;
    void display() //Here create a function to print  the same things in the main function
    {
        cout << "\nID : " << id << "\n GPA is :" << gpa << endl;
    }
};

int main()
{
    student obsohan, obsumona, obshila, obshanta;
    obsohan.id = 20111102;
    obsohan.gpa = 3.14;
    obsohan.s = "Sohan";
    cout << "\nName : " << obsohan.s;
    obsohan.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obsumona.id = 20111103;
    obsumona.gpa = 4.55;
    obsumona.s = "Sumona";
    cout << "\nName : " << obsumona.s;
    obsumona.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshila.id = 20111103;
    obshila.gpa = 4.55;
    obshila.s = "Shila";
    cout << "\nName : " << obshila.s;
    obshila.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshanta.id = 2011114;
    obshanta.gpa = 4.50l;
    obshanta.s = "Shanta";
    cout << "\nName : " << obshanta.s;
    obshanta.display(); /*call the functio from the class 
                        to access specifire public to prin the same things*/
    cout << endl;
    return 0;
}
