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
	int count1=0,count2=0,count3=0;
	string st,ans;
	cin>>st;
	if(st.size()==1)
            {
                cout<<st;  /*if the input number is one variable the output also seen one variable*/
                return 0;
            }
	for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1')
            {
                count1++;  /*Count the total number of 1 */
            }
            else if(st[i]=='2')
            {
                count2++;  /*Count the total number of 2 */
            }
            else if(st[i]=='3')
            {
                count3++;  /*Count the total number of 3 */
            }
        }
        for(int j=0; j<count1; j++)
        {
            ans=ans+"1+";  /* Here only come out 1+1+1+....as equal the count1 */
        }
        for(int j=0 ;j<count2; j++)
        {
            ans=ans+"2+";  /* Here only come out 2+2+2+....as equal the count2 */
        }
        for(int j=0; j<count3; j++)
        {
            ans=ans+"3+";  /* Here only come out 3+3+3+....as equal the count3 */
        }

            for(int j=0;j<ans.size()-1; j++)  /* for this ans.size()-1 it's never seen the last (+) sign */
            {
                cout<<ans[j];  /* this output contain the 1+1+1+.....+2+2+2+.....+3+3+3+3........like the sequence */
            }
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
