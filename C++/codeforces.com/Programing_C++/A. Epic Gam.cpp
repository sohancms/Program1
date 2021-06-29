                                        /*বিসমিল্লাহির_রহমানির_রহীম*/
   /********************************************************************************************\
   ||                 IN THE NAME OF ALLAH, MOST GRACIOUS AND MOST MERCIFUL                    ||
   ||                                                                                          ||
   ||    Author     : Md.Sohan Mia                                                             ||
   ||    Email      : sohancms@gmail.com                                                       ||
   ||    University : Bangamata Sheikh Fojilatunnesa Mujib Science and Technology University   ||
   ||                                                                                          ||
   ||                 Department of Computer Science & Engineering                             ||
   ||                                                                                          ||
   \********************************************************************************************/

///*****************************************************************************************
///***************START************************START************************START***********
///*****************************************************************************************
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, n, f=1;
    cin >> a >> b >> n;
    while (f!=0)
    {
        if( n != 0 )
        {
            n=n-__gcd(a, n);
        }
        else
        {
        cout << "1"; f = 0;
        return 0;
        }
        if( n != 0 )
        {
            n=n-__gcd(b, n);
        }
        else
        {
            cout << "0"; f = 0;
            return 0;
        }
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//