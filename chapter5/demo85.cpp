#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    // 统一转换为小写来比较 比较方便
    for(int i = 0; a[i]; i ++)
        if(a[i] < 'a') a[i] += 32;
    
    for(int i = 0; b[i]; i ++)
        if(b[i] < 'a') b[i] += 32;
    
    if(a == b) puts("=");
    else if(a > b) puts(">");
    else puts("<");

    return 0;
}