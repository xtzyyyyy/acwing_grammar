#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

//找规律 去找行号 和 空格&星号 的关系,输出上下三角形
int main()
{
    int n;
    cin >> n;

    int x = n / 2;

    for (int i = 0; i < x; i ++)
    {
        for (int j = 0; j < x - i; j ++ ) cout <<' ';
        for (int j = 0; j < 2 * i + 1; j ++  ) cout << '*';
        puts("");
    }

    for (int i = 0; i < n - x; i ++ )
    {
        for (int j = 0; j < i; j ++ ) cout << ' ';
        for (int j = 0; j < n - 2 * i; j ++ ) cout << '*';
        puts("");
    }
    return 0;
}  
