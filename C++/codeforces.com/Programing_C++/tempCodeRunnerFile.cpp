#include <iostream>
using namespace std;

int gcd(int a, int b)
{
   while (b)
      b ^= a ^= b ^= a %= b;
   return a;
}

int main()
{
   int x;
   char ch;
   cin >> ch;
   x = ch;
   cout << x;
   cout << gcd(6, 3);
   return 0;
}