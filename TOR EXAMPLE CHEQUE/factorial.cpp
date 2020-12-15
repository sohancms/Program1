#include<iostream>
using namespace std;

void odd(int a);
void even(int a);

int main()
{
    int i;
    for(i;i<i+1;i++)
    {
        cout<< "Type a number ( 0 is exit) :";
        cin >> i;
        odd(i);
    }
    return 0;
}
void odd(int a)
{
    if(a%2!=0)
    {
        cout << "The number is odd \n";

    }
    else
    {
        even(a);
    }
}
void even(int a)
{
    if(a%2==0)
    {
        cout << "The number is even\n";
    }
    else
    {
        odd(a);
    }
}
