#include <iostream>
using namespace std;

class Fruit
{
private:
    /* data */
public:
    int kg;
    string s;
    void display()
    {
        cout << "The prize is : " << s << "=" << kg << endl;
    }
    void setvalue(int x, string y) //adding parameter in this function
    {
        kg = x;
        s = y;
    }
};

int main()
{
    Fruit Apple, Mango;
    Apple.setvalue(150, "APPLE"); //setvalue function is calling here
    Apple.display();

    Mango.setvalue(80, "MANGO"); //setvalue function is calling here
    Mango.display();
    return 0;
}