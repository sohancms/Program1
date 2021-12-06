#include <iostream>
using namespace std;

class rectangel
{
public:
    int length;
    int breadth;

    void setlength(int a);
    void setbreadth(int b);
    int getarea();
};

void rectangel::setlength(int a)
{
    length = a;
}
void rectangel::setbreadth(int b)
{
    breadth = b;
}

int rectangel::getarea()
{
    return length * breadth;
}

int main()
{
    int m, n;
    rectangel rt;
    cout << "Enter the length and width :";
    cin >> m >> n;
    rt.setlength(m);
    rt.setbreadth(n);
    cout << "Area is : " << rt.getarea() << endl;
    return 0;
}