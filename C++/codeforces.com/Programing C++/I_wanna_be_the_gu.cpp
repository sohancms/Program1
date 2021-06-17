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
    int n, i, p, x, count = 0;
    cin >> n >> p;
    int s[n+1]={0};
    for( i = 0; i < p; i++ )
    {
        cin >> x;
        s[x]++;
    }
    int q;
    cin >> q;
    for ( i = 0; i < q; i++ )
    {
        cin >> x;
        s[x]++;
    }
    for( i = 1 ; i <= n; i++)
    {
        if( s[i] == 0)
        {
            break;
        }
    }
    if ( i == n+1 )
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//