#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int f[47];

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i ++)
    {
        if(i == 1) f[i] = 0;
        else if(i == 2) f[i] = 1;
        else f[i] = f[i - 1] + f[i - 2]; 
    }    

    for(int i = 1; i <= n; i ++) cout << f[i] << ' ';
    return 0;
}