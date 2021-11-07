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
        ll xa, ya;
        ll xb, yb;
        ll xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        ll ans = abs(xa - xb) + abs(ya - yb);
        if ((xa == xb) && (xb == xf))
        {
            if (((ya <= yf) && (yf <= yb)) || ((yb <= yf) && (yf <= ya)))
            {
                ans += 2;
            }
        }
        else if ((ya == yb) && (yb == yf))
        {
            if (((xa <= xf) && (xf <= xb)) || ((xb <= xf) && (xf <= xa)))
            {
                ans += 2;
            }
        }
        cout << ans << endl;

        /*if (xa == xb && xb == xf)
        {
            if (((ya >= yf) && (yb >= yf)) || ((ya <= yf) && (yb <= yf)))
            {
                cout << abs(ya - yb) << endl;
            }
            else if (((ya <= yf) && (yf <= yb)) || ((yb <= yf) && (yf <= ya)))
            {
                cout << (yb + ya) << endl;
            }
        }
        else if ((ya == yb) && (ya != yf))
        {
            cout << abs(xa - xb) << endl;
        }
        if (ya == yb && yb == yf)
        {
            if (((xa >= xf) && (xb >= xf)) || ((xa <= xf) && (xb <= xf)))
            {
                cout << abs(xa - xb) << endl;
            }
            else if (((xa <= xf) && (xf <= xb)) || ((xb <= xf) && (xf <= xa)))
            {
                cout << (xb + xa) << endl;
            }
        }
        else if ((xa == xb) && (xa != xf))
        {
            cout << abs(ya - yb) << endl;
        }
        else if ((xa != xb) && (xb != xf) && (xa != xf) && (ya != yb) && (yb != yf) && (ya != yf))
        {
            cout << max((xa + yb), (xb + ya)) << endl;
        }
        else if()
        {
            cout << max(xa, ya) << endl;
        }*/
    }
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//