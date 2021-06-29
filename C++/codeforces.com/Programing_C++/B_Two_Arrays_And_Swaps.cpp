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
#define PI acos(-1.0)
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double dd;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        int *arr;
        int *brr;
        arr = new int[n];
        brr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + n);
        int i = 0, j = (n - 1);
        while (k > 0 && i <= n && j >= 0)
        {
            if (arr[i] < brr[j])
            {
                swap(arr[i], brr[j]);
                i++;
                k--;
                j--;
            }
            else
            {
                break;
            }
        }
        int sum = 0;
        for (int l = 0; l < n; l++)
        {
            sum = sum + arr[l];
        }
        cout << sum << endl;
    }
}

int main()
{
    solve();
    return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//