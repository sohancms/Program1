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
    string s;
    int n,count1=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
            if(s[i]>='a' && s[i]<='z')
            {
                count1=s[i]-'a';
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                count1=s[i]-'a';
            }
    }
    for(int i=0; i<n; i++)
    {
        if(count1==0)
        {
            cout<< "NO" << endl;
        }
    }
         cout << "YES" << endl;

return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
