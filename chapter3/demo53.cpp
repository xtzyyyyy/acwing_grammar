#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;
    while(cin >> m >> n && m > 0 && n > 0)
    {
        int res = 0; // 注意
        if(m > n) swap(m, n);
        for(int i = m; i <= n; i ++)
        {
            cout << i << ' ';
            res += i;
        }
        cout << "Sum=" << res << endl;
    }
    return 0;
}