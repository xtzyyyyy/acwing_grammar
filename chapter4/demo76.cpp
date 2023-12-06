#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int res[110][110];

int main()  
{
    int n, m;
    cin >> n >> m;
    int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
    for(int x = 0, y = 0, d = 0, k = 1; k <= n * m; k ++)
    {
        res[x][y] = k;
        int a = x + dx[d], b = y + dy[d];
        if(a < 0 || a >= n || b < 0 || b >= m || res[a][b])
        {
            d = (d + 1) % 4;
            a = x + dx[d], b = y + dy[d];
        }
        x = a, y = b;
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j ++) cout << res[i][j] << ' ';
        cout << endl;
    }

    return 0;
}