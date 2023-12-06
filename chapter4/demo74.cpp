#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;



int main()  
{
    int n;
    while(cin >> n, n)
    {
        for(int i = 1; i <= n; i ++)
        {
            int k = 1;
            for (int j = i; j >= 1; j --, k ++) cout << j << ' ';
            for (int j = 2; k <= n; k ++, j ++) cout << j << ' ';
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}