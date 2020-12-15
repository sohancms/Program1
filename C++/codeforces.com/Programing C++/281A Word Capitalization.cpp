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
    int ans=0;
    string s,s1;
    cin >> s;
    if(s[0]<97)
    {
        cout << s;
    }
    else
    {
        s1=s[0]-32;
        cout << s1 ;
        for(int i=1; i<s.size(); i++)
        {
            cout << s[i];
        }
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
