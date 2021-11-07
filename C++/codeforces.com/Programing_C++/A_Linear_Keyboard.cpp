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
//====================================> define <=====================================
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
//=====================================> const <=====================================
const ll mod = 1000000007;

void solve()
{
    string s26, s;
    cin >> s26 >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s26.size(); j++)
        {
            if (s26[j] == s[i])
            {
                v.pb(j);
            }
        }
    }
    int sum = 0;
    for (int k = 0; k < v.size() - 1; k++)
    {
        sum += abs(v[k] - v[k + 1]);
    }
    cout << sum << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    rtn 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//