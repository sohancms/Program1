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
    ll test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        int max_x = (a > b) ? a : b;
        int min_y = (a < b) ? a : b;
        int diff = max_x - min_y;

        cout << (diff) / 10 + ((diff) % 10 > 0) << endl;
        //if (a == b)
        //{
        //    cout << "0" << endl;
        //}
        //else if (a > b)
        //{
        //    diff = a - b;
        //    // while (diff > 10)
        //    // {
        //    //     count++;
        //    //     diff -= 10;
        //    // }
        //    //cout << count << endl;
        //    if (diff % 10 == 0)
        //    {
        //        cout << diff / 10 << endl;
        //    }
        //    else
        //    {
        //        cout << (diff / 10) + 1 << endl;
        //    }
        //}
        //else
        //{
        //    diff = b - a;
        //    //while (diff > 10)
        //    //{
        //    //    count++;
        //    //    diff -= 10;
        //    //}
        //    //cout << count << endl;
        //    if (diff % 10 == 0)
        //    {
        //        cout << diff / 10 << endl;
        //    }
        //    else
        //    {
        //        cout << (diff / 10) + 1 << endl;
        //    }
        //}
    }
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//