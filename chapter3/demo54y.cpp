#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define LL long long


// 1+2+6/2＝6

using namespace std;
int check(LL x)
{
    LL res = 0;
    
    if(x == 1) return 0; // 特判

    for(LL i = 1; i <= sqrt(x); i ++)
    {
        if(i == 1)
        {
            res+= 1;
            continue;
        }
        if(!(x % i)) res = res + i + x / i;
    }
    if(res == x) return 1;
    return 0;
}

int main()
{
    int n;
    LL x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(check(x)) printf("%d is perfect\n", x);
        else printf("%d is not perfect\n", x);
    }
    return 0;
}