#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long f[61]; // 注意爆int

int main()
{ 
    f[0] = 0, f[1] = 1;
    for(int i = 2; i < 61; i ++) f[i] = f[i - 1] + f[i - 2];    
    
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        printf("Fib(%d) = %ld\n",n, f[n]);
    }

    return 0;
}