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
    set<char>word;
    int n ;
    cin>>n;
    string s;
    cin>>s;
    for(int i =0 ; i<n;i++)
    {
          if(s[i] >='A' && s[i] <= 'Z')
          {
              s[i] += 32;              
          }
          word.insert(s[i]);
    }
    if (word.size() == 26 )
    {
        cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
