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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v);
    set<int> s;
    for (auto i : v)
        s.insert(i);
    while (s.size() < 300)
    {
        bool flag = 1;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                int diff = abs(v[i] - v[j]);
                if (s.find(diff) == s.end())
                {
                    s.insert(diff);
                    v.pb(diff);
                    flag = 0;
                    break;
                }
            }
            if (!flag)
                break;
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << s.size() << endl;
            for (auto i : s)
                cout << i << " ";
            cout << endl;
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//