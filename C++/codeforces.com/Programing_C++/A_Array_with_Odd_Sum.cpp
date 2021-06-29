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

    ll test;
    cin >> test;
    while (test--)
    {
        ll test2;
        cin >> test2;
        ll sum = 0, count_odd = 0, count_even = 0;
        for (int i = 0; i < test2; i++)
        {
            int a;
            cin >> a;
            sum = sum + a;
            a % 2 == 0 ? count_even++ : count_odd++;
        }
        if (sum % 2 == 0)
        {
            if (count_odd == 0)
            {
                cout << "NO" << endl;
            }
            else if (count_odd % 2 == 0 && count_even == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
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