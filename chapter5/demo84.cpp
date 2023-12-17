#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
   double k;
   string a, b;
   cin >> k >> a >> b;

   int len = a.size();
   int count = 0;
   for (int i = 0; i < a.size(); i++)
   {
      if (a[i] == b[i])
      {
         count ++;
      }
   }
   double res = count * 1.0 / len;
   if (res >= k)
   {
      cout << "yes" << endl;
   }
   else
   {
      cout << "no" << endl;
   }
    return 0;
}