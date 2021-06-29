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
    int n, a, b, sum=0, result=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b; /* 'a' is the passengers exit and 'b' is the passengers enter */
        sum=sum+b-a;
        if(sum>result)
        {
            result=sum;
        }
    }
    cout << result; /*denoting the minimum possible capacity of the tram */
}
//**************************Alhamdulillah**************************//

//**************************Alhamdulillah**************************//