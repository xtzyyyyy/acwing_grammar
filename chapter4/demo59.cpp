#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double x[101];

int main()
{
    for(int i = 0; i < 100; i ++) 
    {
      cin >> x[i];
      if(x[i] <= 10) printf("A[%d] = %.1lf\n", i, x[i]) ;
    }

    return 0;
}