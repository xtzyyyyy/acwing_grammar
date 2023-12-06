#include <iostream>

using namespace std;

// 想想有没有更好的解法
int main()
{
    int n, m;
    cin >> n >> m;

    int num = 1;
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= m; j ++)
        {
            if(j == m) 
            {
                cout << "PUM";
                num ++;
                continue;
            }
            cout << num << ' ';
            num ++;
        }
        cout << endl;
    }
    return 0;
}