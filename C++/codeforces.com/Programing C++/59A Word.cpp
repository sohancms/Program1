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
    int count1=0, count2=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]= toupper(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout << s << endl;
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
