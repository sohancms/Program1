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
    int t , a, b;
    cin >> t;
    while ( t-- )
    {
        cin >> a >> b;
        if( a > b )
        {
            if( a < 2*b )
            {
                cout << (2*b*2*b) << endl;
            }
            else if( a > 2*b )
            {
                cout << (a*a) << endl;
            }
            else if ( a == 2*b )
            {
                cout << (a*a) <<endl;
            }
        }
        else if( a < b )
        {
            if( b < 2*a )
            {
                cout << (2*a*2*a) << endl;
            }
            else if( b > 2*a )
            {
                cout << ( b*b) << endl;
            }
            else if ( b == 2*a )
            {
                cout << ( b*b ) << endl;
            }
        }
        else if( a == b )
        {
            cout << (2*a*2*a) << endl;
        }
        
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//