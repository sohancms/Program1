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
    ll number, count = 0, remainder;
    cin >> number;
    while (number > 0)
    {
        remainder = number % 10;
        count++;
        number = number / 10;
    }
    ll result = 0;
    result = 4 * (remainder - 1) + count;
    ll sum = 0;
    if (result <= 4)
    {
        while (result > 0)
        {
            sum += result;
            result--;
        }
        cout << sum << endl;
        return;
    }
    else if (4 < result && result <= 8)
    {
        int result1 = result - 4;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 10) << endl;
        return;
    }
    else if (8 < result && result <= 12)
    {
        int result1 = result - 8;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 20) << endl;
        return;
    }
    else if (12 < result && result <= 16)
    {
        int result1 = result - 12;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 30) << endl;
        return;
    }
    else if (16 < result && result <= 20)
    {
        int result1 = result - 16;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 40) << endl;
        return;
    }
    else if (20 < result && result <= 24)
    {
        int result1 = result - 20;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 50) << endl;
        return;
    }
    else if (24 < result && result <= 28)
    {
        int result1 = result - 24;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 60) << endl;
        return;
    }
    else if (28 < result && result <= 32)
    {
        int result1 = result - 28;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 70) << endl;
        return;
    }
    else if (32 < result && result <= 36)
    {
        int result1 = result - 32;
        while (result1 > 0)
        {
            sum += result1;
            result1--;
        }
        cout << (sum + 80) << endl;
        return;
    }
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