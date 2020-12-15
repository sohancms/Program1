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
    int n,array[1000000], max, result=0, ans=0;
    cin >> n;
    for( int i= 0; i < n; i++ )
    {
        cin >> array[i];
        max=array[0];
        for( int i=0; i<n; i++)
        {
            if( max < array[i] )
            {
                max = array[i];
            }
        }
    }
    for( int i = 0; i < n; i++ )
    {
        if( array[i] < max )
        {
            ans = max -array[i];
            result += ans;
        }
    }
    cout << result << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//