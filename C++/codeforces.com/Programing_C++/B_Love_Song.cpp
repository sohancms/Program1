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
#include <stdio.h>
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
    int a = (97 - 1);
    ll n, q, l, r, x = 0;
    cin >> n >> q;
    str ss;
    cin >> ss;
    vector<ll> v;
    vector<ll> v2;
    for (ll i = 1; i < n; i++)
    {
        ll x = ss[i] - a;
        v.pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll y = v2[i] + v[i];
        v2.pb(y);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i];
    }

    //for (int i = 0; i < q; i++)
    //{
    //    int l, r;
    //    cin >> l >> r;
    //    cout << v2[r] - v2[l - 1] << endl;
    //}
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//