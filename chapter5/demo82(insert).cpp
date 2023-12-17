#include <iostream>
using namespace std;

// str.insert(i,s);//在原串下标为i的字符串str前插入字符串s
int main()
{
    string s,sub;
    while(cin >> s>> sub)
    {
        int idx=0;
        for(int i=0;i<s.size();i++)
            if(s[i] > s[idx])
            {
                idx= i;
            }
        s.insert(idx+1,sub);
        cout<<s<<endl;
    }
}