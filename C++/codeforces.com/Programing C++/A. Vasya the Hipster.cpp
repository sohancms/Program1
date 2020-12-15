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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b , ans = 0;
    cin >> a >> b;
    if( a == b)
    {
        cout << a << " " <<'0' << endl;
    }
    else if( a < b )
    {
        cout << a << " ";
        ans= b - a;
        if( ans == 1 || ans == 0 )
        {
            cout << '0' << endl;
        }
        else
        {
            cout << ans/2 << endl;
        }
        
    }
    else if( a > b )
    {
        cout << b << " ";
        ans = a - b;
        if( ans == 1 || ans == 0)
        {
            cout << '0' << endl;
        }
        else
        {
            cout << ans/2 << endl;
        }
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//