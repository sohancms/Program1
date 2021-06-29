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
//====================================> define <====================================
#define PI acos(-1.0)
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define ima INT_MAX
#define imi INT_MIN
#define rtn return

using namespace std;

//====================================> typedef <====================================
typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;

void solve()
{
    ll n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        arr.pb(b);
    }
    if (n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        if (n % 2 == 0 or n % 2 != 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " " << arr[n - 1] << " ";
                n--;
            }
        }
        if (arr.size() % 2 != 0)
        {
            for (int i = 0; i = arr.size() / 2; i++)
            {
                cout << arr[arr.size() / 2];
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//