/*বিসমিল্লাহির_রহমানির_রহীম
 Author: SOHAN
*/
///*****************************************************************************************
///***************START************************START************************START***********
///*****************************************************************************************

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;   /*contains a single integer n the number of statements in the program*/
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;   /*get the one character from keyboard*/
        if(s[1]=='+') /* this condition only count the positive (+) variable*/
        {
           ans++;   /*ans=ans+1; or ans++; increases the value of variable x by 1*/
        }
        else    /* this condition only count the negative (-) variable*/
        {
            ans--;  /*ans=ans-1; or ans++;decreases the value of variable x by 1*/
        }
    }
    cout << ans;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//

