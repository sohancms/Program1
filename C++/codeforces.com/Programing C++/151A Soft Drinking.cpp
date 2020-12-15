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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l>> c >> d >> p >> nl >> np;
    int ans=0, value1, value2;
    value1=k*l; value2=c*d;
    int x,y,z;
    x=value1/nl; y=value2; z=p/np;
    ans=min(x, min(y,z))/n;
    cout << ans << endl;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
