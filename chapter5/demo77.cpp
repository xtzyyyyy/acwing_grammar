#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    // 第一种 string 读入一行(带空格)方式
    string str;
    getline(cin,str);
    cout << str.length() << endl;

/*
    // 第二种 C语言方式
    char s[105];
    gets(s);
    printf("%d", strlen(s));

    // 第三种 字符数组
    char a[105];
    cin.get(a, 105); // 需要注意cin.get()不会把换行符取出删除，影响下一次读入！

    // 第四章 字符数组
    char c[105];
    cin.getline(c, 105);
*/
    return 0;
}