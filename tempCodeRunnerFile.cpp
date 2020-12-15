#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, count1 = 0, count2 = 0, count3 = 0;
    for (int i = 1; i <= 5; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            count++;
            if (n > 0)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
        else
        {
            count1++;
            if (n > 0)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
    }
    cout << count << " Numbers are Even" << endl;
    cout << count1 << " Numbers are Odd" << endl;
    cout << count2 << " Numbers are Positive" << endl;
    cout << count3 << " Numbers are Negative" << endl;
    return 0;
}