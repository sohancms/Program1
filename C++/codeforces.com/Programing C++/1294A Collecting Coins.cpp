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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n, sum=0;
        cin >> a >> b >> c >> n;
        sum = a + b + c+ n;
        if( sum % 3 == 0 && a <= sum / 3 && b <= sum / 3 && c <= sum / 3 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//