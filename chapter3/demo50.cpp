#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    int res1 = 0;
    int res2 = 0;
    cin >> n;
    while(n --)
    {
        cin >> x;
        if(x >= 10 && x <= 20) res1++;
        else res2 ++;
    }

    printf("%d in\n", res1);
    printf("%d out", res2);
    return 0;
}