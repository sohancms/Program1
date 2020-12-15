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
        cout << "\nN0ame : " << s << "\nID : " << id << "\nGPA is :" << gpa << endl;
    }
    void setvalue(int x, double y, string z) //adding the function with parameter
    {
        id = x;
        gpa = y;
        s = z;
    }
};

int main()
{
    student obsohan, obsumona, obshila, obshanta;
    obsohan.setvalue(20111102, 4.50, "SOHAN"); //here call the parameter function
    obsohan.display();                         /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obsumona.setvalue(20111103, 4.90, "SUMONA"); //here calling the parameter functioin
    obsumona.display();                          /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshila.setvalue(20111103, 3.50, "SHILA"); //here calling the parameter function
    obshila.display();                         /*call the functio from the class 
                        to access specifire public to prin the same things*/

    obshanta.setvalue(20111104, 2.50, "SHANTA"); //here calling the parameter functiom
    obshanta.display();                          /*call the functio from the class 
                        to access specifire public to prin the same things*/
    cout << endl;
    return 0;
}
