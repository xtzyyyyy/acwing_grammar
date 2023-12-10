#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        // 解法1 暴力解法
        // if(a == b) puts("Tie");
        // else if(a == "Hunter" && b == "Gun" || a == "Gun" && b == "Bear" || a == "Bear" && b == "Hunter")  puts("Player1");
        // else puts("Player2");

        // 解法2 优雅解法
        int a_len = a.length();
        int b_len = b.length();
        if(a_len - b_len == 3 || a_len - b_len == -1 || a_len - b_len == -2) puts("Player1");
        else if (a_len == b_len) puts("Tie");
        else puts("Player2"); 
    }   
        return 0;
}