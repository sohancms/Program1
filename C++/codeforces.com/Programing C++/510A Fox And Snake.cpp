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
	int n, m, k=0;
	cin >> n >> m;
	for(int i = 0; i<n; i++)
        {
            if(i%2 == 0)
            {
                for(int j = 0; j<m; j++)
                {
                    cout << "#";
			    }
			cout << endl;
            }
            else
            {
                k++;
                if(k%2 != 0)
                {
                    for(int j = 0; j< m-1; j++)
                    {
                        cout << ".";
                    }
                    cout << "#" << endl;
                }
                else
                {
                    cout << "#";
                    for(int j = 0; j< m-1; j++)
                    {
                        cout << ".";
                    }
                    cout << endl;
                }
            }
        }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
