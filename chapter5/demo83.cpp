#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int c[100010];
char res[100010];

// 97-122 是小写字母
int main()
{
    string str;
    bool s = 0;
    cin >> str;
    // 模拟
    for(int i = 0; i < str.size(); i++)
        c[str[i]]++;

    for(int i = 0; i < str.size(); i++)
    {
        if(c[str[i]] == 1)
        {
            cout << str[i] << endl;
            s = 1;
            break;
        }
        // else if(i == str.size() - 1) puts("no");
    }

    if(s == 0) puts("no");
    return 0;
}