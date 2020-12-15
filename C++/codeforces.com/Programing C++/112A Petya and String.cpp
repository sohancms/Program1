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
    string s, t;
    cin >> s >> t;
    for( int i = 0; i < s.size(); i++ )
    {
        if( s[i] >= 'A' && s[i] <='Z' )
        {
            s[i] += 32; 
        }
    }

    for( int i = 0; i < t.size(); i++ )
    {
        if( t[i] >= 'A' && t[i] <='Z' )
        {
            t[i] += 32; 
        }
    }

    for( int i = 0; i < s.size(); i++ )
    {
        if( s[i] == t[i] )
        {
            continue;
        }
        if( s[i] > t[i] )
        {
            cout << 1 << endl;
            return 0;
        }
        if( s[i] < t[i] )
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//