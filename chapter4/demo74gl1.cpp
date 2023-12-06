#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int q[100][100];

// 还有规律 第三种方法 abs(i - j) + 1
int main()  
{
    int n;
    while(cin >> n, n)
    {
        for(int i = 0; i < n; i ++) 
        {
            q[i][i] = 1; // 边填对角线边枚举
            for (int j = i + 1, k = 2; j < n; j ++, k ++) q[i][j] = k; // 枚举行
            for (int j = i + 1, k = 2; j < n; j ++, k ++) q[j][i] = k; // 枚举列
        }
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j ++) cout << q[i][j] << ' ';
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}