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
#include <conio.h>
#include <windows.h>
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
	vector<int> v, v1;
	for (int i = 0; i < 2 * n; i++)
	{
		int p;
		cin >> p;
		v.pb(p);
	}
	for (int i = 0; i < 2 * n; i++)
	{
		for (int j = i + 1; j < 2 * n; j++)
		{
			if (v[i] == v[j])
			{
				v1.pb(v[i]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

int main()
{
	//system("cls");
	ll test;
	cin >> test;
	while (test--)
	{
		solve();
	}
	//getch();
	return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//