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
    ll n, a = 0, b = 0, x = 0, y = 101;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        x = max(x, arr[j]);
        y = min(y, arr[j]);
    }

    for (int k = 0; k < n; k++)
    {
        if (arr[k] == x)
        {
            a = k;
            break;
        }
    }

    for (int l = 0; l < n; l++)
    {
        if (arr[l] == y)
        {
            b = l;
        }
    }

    if (a > b)
    {
        cout << a + n - b - 2;
    }

    else
    {
        cout << a + n - b - 1;
    }
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//