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
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int cup=a1+a2+a3, medal=b1+b2+b3;
    int count=0;
    for(count; cup>0; count++)
    {
        cup=cup-5;
    }
    for(count; medal>0; count++)
    {
        medal=medal-10;
    }
    if(count<=n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
