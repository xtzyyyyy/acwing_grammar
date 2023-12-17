#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int main()
{  
    // 1. 利用cin 不读入空格的特性
    // string a;
    // while(cin >> a)
    // {
    //     cout << a << ' ';
    // }

    // 2. 当读到空格字符并且下一个字符仍然为空格字符时跳过,否则输出
    // string s;
    // getline(cin,s); 
    // for(int i = 0;s[i]!='\0'; i++)
    // {
    //     if(s[i]==' '&&s[i]==s[i+1])    continue;
    
    //     cout<<s[i];
    // }

    // 3. 利用标识符flag来标记上一个输出字符是否为空格，如果是,那么本次字符如果还是空格的话不输出。
    string s;
    getline(cin,s);
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            { cout<<s[i];
             flag=0;}
        else if(flag==0)
            {
                cout<<" ";
                flag=1;
            }
        else
            continue;
    }
    return 0;
}