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
    int count=0;
    string st;
    cin >> st;
    for(int i=0; i<=st.size(); i++)
    {

        if(st[i]=='4' || st[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
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
