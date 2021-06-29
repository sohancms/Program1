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
#include <algorithm>
#include <climits>
#define PI acos(-1.0)
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double dd;

void solve()
{
    ll t, a, b, result = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << '0' << endl;
        }
        else
        {
            int temp = b - (a % b);
            cout << temp << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//