#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[21];

int main()
{ 
    for(int i = 0; i < 20; i ++) cin >> a[i];

    for(int i = 0, j = 19; i <= 10, j >= 10; i ++, j --)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }    

    for(int i = 0; i < 20; i ++) printf("N[%d] = %d\n",i, a[i]);
    return 0;
}