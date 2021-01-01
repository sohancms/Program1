#include <iostream>
using namespace std;

int matrix[5][5], x, y;

int abs(int x, int y)
{
    if (x >= y)
    {
        return (x - y);
    }
    else
    {
        return (y - x);
    }
}

void solve()
{
    for (int row = 0; row < 5; row++)
    {
        for (int coloum = 0; coloum < 5; coloum++)
        {
            cin >> matrix[row][coloum];
            if (matrix[row][coloum] == 1)
            {
                x = row + 1;
                y = coloum + 1;
            }
        }
    }
    cout << abs(3, x) + abs(3, y);
}

int main()
{
    solve();
    return 0;
}