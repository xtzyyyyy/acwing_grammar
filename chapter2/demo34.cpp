#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{   
   int a, b, c;
   cin >> a >> b >> c;
   
   int n1 = a, n2 = b, n3 = c;

   if (b > a) swap(a, b);
   if (c > a) swap(a, c);
   if (c > b) swap(b, c);

   printf("%d\n%d\n%d\n", c, b, a);
   puts("");
   printf("%d\n%d\n%d", n1, n2, n3);
    
    
    return 0;
}