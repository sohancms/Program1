/*বিসমিল্লাহির_রহমানির_রহীম
 Author: SOHAN
*/
///*****************************************************************************************
///***************START************************START************************START***********
///*****************************************************************************************

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum=0,Icosahedron=20,Cube=6,Tetrahedron=4,Dodecahedron=12,Octahedron=8;
    string s;
    while(cin >> n)
    {
        for(i=0;i<n;i++)
        {
            cin >> s;
            if(s == "Icosahedron")
                sum = sum + 20;
            else if(s == "Cube")
                sum = sum + 6;
            else if(s == "Tetrahedron")
                sum = sum + 4;
            else if(s=="Dodecahedron")
                sum = sum + 12;
            else if(s=="Octahedron")
                sum = sum + 8;
     }
        cout << sum << endl;
        sum=0;
    }
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//
