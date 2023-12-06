#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    while(n --)
    {
        int res = 0;
        cin >> x >> y;
        if(x > y) swap(x, y);

        for (int i = x; i < y; i ++)
        {
            if(i == x) continue;
            if(i % 2) res+= i;
        }

        cout << res << endl;
    }
    return 0;
}