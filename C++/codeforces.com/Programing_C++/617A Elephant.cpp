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
    int x,x1,x2,x3,x4,x5,sum=0;
    int p=0,p1=0,p2=0,p3=0,p4=0;
    cin >> x;
    if(x<=5)
    {
        cout << '1';
        return 0;
    }
    if(x>=5)
    {
        p=x/5;
        x1=x-(p*5);
        if(x1>=4)
        {
            p1=x1/4;
            x2=x1-(p1*4);
        }
        else if(x1>=3)
        {
            p2=x1/3;
            x2=x1-(p2*3);
        }
        else if(x1>=2)
        {
            p3=x1/2;
            x3=x1-(p3*2);
        }
        else if(x1>=1)
        {
            p4=x1/1;
            x4=x1-(p4*1);
        }
        sum=p+p1+p2+p3+p4;
        cout << sum;
        }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
