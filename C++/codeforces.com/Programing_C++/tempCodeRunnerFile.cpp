#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   int test;
   int a, b, c, d;
   cin >> test;
   while (test--)
   {
      cin >> a >> b >> c >> d;
      int x = b - 1, y = b + 1, z = c + 1;
      cout << x << " " << y << " " << z;
   }
   getch();
   return 0;
}