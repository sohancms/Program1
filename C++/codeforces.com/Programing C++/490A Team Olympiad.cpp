#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    vector <int> vector_array;
    for(int i=0; i<n; i++)
    {
        cin>> x;
        vector_array.push_back(x);
    }

    int w=0;
    int number =n/3;
    if(n<3)
    {
        cout << 0 << endl;
        return 0;
    }

    vector< vector<int> > vector_array2(number);
    int j=0;
    int flag=1;


    while(true)
    {
        int skill=0, num=1;

        for(int i=0; i<n; i++)
        {

            if(vector_array[i] == 1)
            {
                skill++;
                num++;
                vector_array2[j].push_back(i+1);
                vector_array[i]=0;
                break;
            }
        }


        for(int i=0; i<n; i++)
        {

            if(vector_array[i] == 2)
            {
                skill++;
                num++;
                vector_array2[j].push_back(i+1);
                vector_array[i]=0;
                break;
            }
        }

        for(int i=0; i<n; i++)
        {

            if(vector_array[i] == 3)
            {
                skill++;
                num++;
                vector_array2[j].push_back(i+1);
                vector_array[i]=0;
                break;
            }
        }

        if(skill == 3)
        {
            w++;
        }

        if(w == n/3)
        {
            break;
        }

        if(w == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        if(skill !=3 )
        {
            break;
        }

        j++;
    }
    cout << w << endl;
    for(int i=0; i<w; i++)
    {
        for(int k=0; k<3; k++)
        {
            cout << vector_array2[i][k] << " ";
        }
        cout << endl;
    }
return 0;
}

