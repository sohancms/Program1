#include <bits/stdc++.h>
using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

class Box
{
public:
    int l, b, h;

    Box() // Constructors
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height) // Box(int,int,int);
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box &B) // Box(Box);
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength() // int getLength(); // Return box's length
    {
        return l;
    }
    int getBreadth() // int getBreadth (); // Return box's breadth
    {
        return b;
    }
    int getHeight() // int getHeight ();  //Return box's height
    {
        return h;
    }
    long long CalculateVolume() // long long CalculateVolume(); // Return the volume of the box
    {
        return (l * b * h);
    }

    // Overload operator < as specified
    // bool operator<(Box& b)
    bool operator<(const Box &B)
    {
        if (l < B.l)
            return true;

        if (b < B.b && l == B.l)
            return true;

        if (h < B.h && l == B.l && b == B.b)
            return true;

        return false;
    }
};

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)
ostream &operator<<(ostream &out, const Box &B)
{
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}