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
#define mp make_pair7
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
    vector<int> v;
    for (int i = 1; i <= test; i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }
    ll left = 0, right = test - 1;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < test; i++)
    {
        if (i % 2 == 0)
        {
            if (v[right] > v[left])
            {
                sum1 += v[right];
                right--;
            }
            else if (v[right] <= v[left])
            {
                sum1 += v[left];
                left++;
            }
        }
        else
        {
            if (v[left] > v[right])
            {
                sum2 += v[left];

                left++;
            }
            else if (v[left] <= v[right])
            {
                sum2 += v[right];
                right--;
            }
        }
    }
    cout << sum1 << " " << sum2;
}
int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//