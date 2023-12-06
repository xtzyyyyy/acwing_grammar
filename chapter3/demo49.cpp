#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a, res1, res2, res3;
char t;

int main()
{
   int n;
   cin >> n;
   while(n --)
   {
        cin >> a >> t;
        if(t == 'C') res1 += a;
        if(t == 'R') res2 += a;
        if(t == 'F') res3 += a;
   }
   int total = res1 + res2 + res3;
   printf("Total: %d animals\n", total);
   printf("Total coneys: %d\n", res1);
   printf("Total rats: %d\n", res2);
   printf("Total frogs: %d\n", res3);
   printf("Percentage of coneys: %.2lf %%\n", res1 * 1.0 / total * 100);
   printf("Percentage of rats: %.2lf %%\n", res2 * 1.0 / total * 100);
   printf("Percentage of frogs: %.2lf %%\n", res3 * 1.0 / total * 100);
    return 0;
}