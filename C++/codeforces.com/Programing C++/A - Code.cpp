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
    int n;
    cin >> n;
    if( n % 2 == 0)
    {
        cout << ( n * n ) / 2 << endl;
    }
    else
    {
        cout << ( ( n*n ) + 1 ) / 2 << endl;
    }
    for ( int row = 0; row < n; row++)
    {
        if( row % 2 == 0 )
        {
            for( int coloumn = 0; coloumn < n; coloumn++)
            {
                if( coloumn % 2 == 0 )
                {
                    cout << "C";
                }
                else
                {
                    cout << ".";
                }
            }
        cout << endl;
        }
        else
        {
            for( int coloumn = 0; coloumn < n; coloumn ++)
            {
                if( coloumn % 2 == 0 )
                {
                    cout << ".";
                }
                else
                {
                    cout << "C";
                }
            }
        cout << endl;
        }
        
    }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//