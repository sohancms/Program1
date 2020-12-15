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
    int d, sub = 0, ans = 0;
    vector<int>s(3);
    for( int i = 0; i<3; i++)
    {
        cin >> s[i];
    }
    sort( s.begin(), s.end());
    cin >> d;
        sub = ( s[2] - s[1] );
        if( sub < d )
        {
            ans += d - sub;    
        }
        sub = ( s[1]- s[0] );
        if( sub < d )
        {
            ans += d - sub;
        }
        cout << ans << endl;
return 0;    
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//