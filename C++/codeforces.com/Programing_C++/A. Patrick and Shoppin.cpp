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
    int d1, d2, d3, sum = 0;
    cin >> d1 >> d2 >> d3;
    if( (d1 + d2) < d3 )
    {
        sum = 2 * ( d1 + d2 );
    }
    else if( (d2 + d3) < d1 )
    {
        sum = 2 * ( d2 + d3 );
    }
    else if( (d3 + d1) < d2 )
    {
        sum = 2 * ( d3 + d1 );
    }
    else
    {
        sum =( d1 + d2 + d3 );
    }
    cout << sum << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//