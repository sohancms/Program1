#include <iostream>
using namespace std;

class student // here create a studen class
{
public:          //acess specifire
     int id;     //intiger type variable and it is a object
     double gpa; //double type variabe and it is a obkect
     string s;   //string type variable amd it is a object
};

int main()
{
     student obsohan, obsumona, obshila, obshanta; //create same type   4 object or object declare
     obsohan.id = 20111102;                        //here object call and initialize
     obsohan.gpa = 3.14;                           //here object call and initialize
     obsohan.s = "Sohan";                          //here object call and initialize
     cout << "Name :"
          << obsohan.s << "\nID : "
          << obsohan.id << "\nGPA is :"
          << obsohan.gpa << endl;

     obsumona.id = 20111103;
     obsumona.gpa = 4.55;
     obsumona.s = "Sumona";
     cout << "Name :"
          << obsumona.s << "\nID : "
          << obsumona.id << "\nGPA is : "
          << obsumona.gpa << endl;

     obshila.id = 20111104;
     obshila.gpa = 4.01;
     obshila.s = "Shila";
     cout << "Name :"
          << obshila.s << "\nID : "
          << obshila.id << "\nGPA is : "
          << obshila.gpa << endl;

     obshanta.id = 20111105;
     obshanta.gpa = 4.50l;
     obshanta.s = "Shanta";
     cout << "Name : "
          << obshanta.s << "\nID : "
          << obshanta.id << "\nGPA is: "
          << obshanta.gpa << endl;

     return 0;
}
