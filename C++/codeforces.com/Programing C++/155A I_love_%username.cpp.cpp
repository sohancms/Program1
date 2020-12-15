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

int main()
{
    int n, count=0, number, max, min ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if(i == 0)
        {
            max=number;
            min=number;
        }
        else
        {
            if(number < min)
            {
                min=number;
                count++;
            }
            else if(number > max)
            {
                max=number;
                count++;
            }
        }
    }
    cout << count << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
