#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define LL long long
using namespace std;


int main()  
{
    int n;

    while(cin >> n, n)
    {
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n;j ++)
            {
                //1 int v = 1;   
                // for(int k = 0; k < i + j; k ++) v *= 2;
                // cout << v << ' ';

                //2 a[i][j] = 1 << (i + j);
                cout << (LL)pow(2, i + j) << ' '; // 也可以定义数组 将这个值赋给数组 然后额外再输出一遍
            }
            cout << endl;    
        }
        cout << endl;
    }
    return 0;
}

