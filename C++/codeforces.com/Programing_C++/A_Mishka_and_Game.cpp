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
    ll test, count = 0, count1 = 0;
    //ll sum = 0, sum2 = 0;
    cin >> test;
    ll mishka, chris;
    while (test--)
    {
        cin >> mishka >> chris;
        if (mishka > chris)
        {
            count++;
        }
        else if (mishka < chris)
        {
            count1++;
        }
        //sum += mishka;
        //sum2 += chris;
    }
    if (count > count1)
    {
        cout << "Mishka" << endl;
    }
    else if (count < count1)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    //if (sum == sum2)
    //{
    //    cout << "Friendship is magic!^^" << endl;
    //}
    //else if (sum > sum2)
    //{
    //    cout << "Mishka" << endl;
    //}
    //else
    //{
    //    cout << "Chris" << endl;
    //}
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//