#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool check(int x)
{
    if(x < 2) return false;
    for (int i = 2; i <= x / i; i ++)
        if(x % i == 0)
            return false;

    return true;
}
int main()
{
    int n, x;
    cin >> n;
    while(n --)
    {
        cin >> x;
        if(check(x)) cout << x << " is prime" << endl;
        else cout << x << " is not prime" << endl;
    }
    return 0;
}