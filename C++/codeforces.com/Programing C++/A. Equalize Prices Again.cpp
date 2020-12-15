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
using namespace std;

int main ()
{
    int q;
    cin >> q;
    for( int i = 0; i < q; i++)
    {
        int n , sum=0;
        cin >> n;
        for( int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if( sum % n == 0 )
        {
            cout << (sum/n) << endl;
        }
        else
        {
            cout << ((sum/n)+1) << endl;
        }
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//