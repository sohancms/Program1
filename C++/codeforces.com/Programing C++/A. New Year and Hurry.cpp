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
    int n, k, time=0, solving_time =0, sum=0, count =0;
    cin >> n >> k;
    time = (24*60) - ((20*60)+k);
    for( int i = 1; i <= n; i++)
    {
        solving_time = 5 * i;
        sum += solving_time;
        if( sum <= time )
        {
            count++;
        }
    }
    cout << count << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//