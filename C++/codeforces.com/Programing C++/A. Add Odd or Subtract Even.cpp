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

int  main()
{
    int test, a, b, x;
    cin >> test;
    while (test--)
    {
        cin >> a >> b;
        if( a == b)
        {
            cout << "0" << endl;
        }
        else if( a > b )
        {
            x = a - b;
            if( x % 2 == 0 )
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
        else if( a < b )
        {
            x = b - a;
            if( x % 2 != 0 )
            {
                cout << "1" << endl;
            } 
            else
            {
                cout << "2" << endl;
            }
        }

    }
return 0;   
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
