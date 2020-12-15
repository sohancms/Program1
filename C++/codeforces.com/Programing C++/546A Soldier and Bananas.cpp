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
    int k, n, w, total=0, borrow=0;
    cin >> k >> n >> w; /*Here 'k' is the price of first banana and 'n' is the remain dollar and 'w' is the number of banana */
    for(int i=0; i<w; i++)
    {
        total=total+k*(i+1);  /*Here  total is the price of number of the w banana */
    }
    borrow=total-n;  /* solder have to borrow the money */
    if(borrow > 0)
    {
        cout << borrow;
    }
    else
    {
        cout << 0;
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
