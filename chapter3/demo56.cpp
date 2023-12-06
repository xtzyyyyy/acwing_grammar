#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

// 曼哈顿距离 d(i,j)=|xi-xj|+|yi-yj|
// 特点: abs(sx - i) + abs(sy - j) <= n / 2
int main()
{
    int n;
    cin >> n;

    int mid = n / 2;

    for(int i = 0 ; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
            if((abs(i - mid) + abs(j - mid)) <= mid) cout << "*"; 
            else cout << " " ;

        cout << endl;
    }
    return 0;
}  