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
    ll test;
    cin >> test;
    while (test--)
    {
        str s;
        cin >> s;
        ll f = 27;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                f = i;
            }
        }
        if (f > 26)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = true;
            ll l = f - 1, r = f + 1;
            for (int i = 1; i < s.size(); i++)
            {
                char c = 'a' + i;
                if (l >= 0 && s[l] == c)
                {
                    l--;
                }
                else if (r < s.size() && s[r] == c)
                {
                    r++;
                }
                else
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cout << "YES" << endl;
            }
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