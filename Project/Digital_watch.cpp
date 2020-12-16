//--------------------------------*বিসমিল্লাহির_রহমানির_রহীম*----------------------------------//
/*********************************************************************************************
||                 IN THE NAME OF ALLAH, MOST GRACIOUS AND MOST MERCIFUL                    ||
||                                                                                          ||
||    Author     : Md.Sohan Mia                                                             ||
||    Email      : sohancms@gmail.com                                                       ||
||    University : Bangamata Sheikh Fojilatunnesa Mujib Science and Technology University   ||
||                                                                                          ||
||                 Department of Computer Science & Engineering                             ||
||                                                                                          ||
*********************************************************************************************/

///*****************************************************************************************
///***************START************************START************************START***********
///*****************************************************************************************
#include <bits/stdc++.h>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#define PI acos(-1.0)
#define size 100
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double d;
int main()
{
    ll h = 0, m = 0, s = 0;
    cout << "Enter the formate of time HH:MM:SS ";
    cin >> h >> m >> s;

start:
    for (h; h < 24; h++)
    {
        for (m; m < 60; m++)
        {
            for (s; s < 60; s++)
            {
                system("cls");
                cout << h << ":" << m << ":" << s;
                if (h < 12)
                {
                    cout << "AM";
                }
                else
                {
                    cout << "PM";
                }
                sleep(1);
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;
    return 0;
    getch();
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//