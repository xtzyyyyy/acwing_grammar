#include <iostream>

using namespace std;

int main()
{
   int x, y, res;
   cin >> x >> y;

   if(x > y) swap(x, y);
   
   for (int i = x; i < y; i ++)
   {
        if(i == x) continue;
        if(i % 2) res += i;
   }

   cout << res << endl;
   return 0;
}