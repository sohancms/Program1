#include <iostream>
using namespace std;

class myclass
{
private:
       int x;

public:
       int y;
};

int main()
{
       myclass ob;
       ob.x = 45;
       ob.y = 50;
       cout << ob.x << endl;
       cout << ob.y << endl;
       return 0;
}