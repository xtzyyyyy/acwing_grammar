#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    string s;  // 定义一个字符串变量s，用于存储输入的字符串
    getline(cin, s);  // 从输入流中获取一行字符串并存储到s中

    int res = 0;  // 定义一个整型变量res，用于统计字符串中数字的个数
    for(int i = 0; i < s.length(); i++)  // 遍历字符串s的每一个字符
        if(s[i] >= '0' && s[i] <= '9') res++;  // 如果当前字符是数字，则将res的值加1
        
    cout << res << endl;  // 输出res的值，即字符串中数字的个数
    return 0;  // 返回0表示程序正常结束
}
