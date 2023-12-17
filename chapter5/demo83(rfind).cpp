#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string A;
    bool s=0;
    while(cin >> A)
    {
        for(int i=0;i<A.size();i++)
        {
            if(A.find(A[i])==A.rfind(A[i]))
            {
                cout<<A[i]<<endl;
                s=1;
                break;
            }
        }
    }
    if(s==0)
        cout<<"no"<<endl;
    return 0;
}

/*
从前往后查找与从后向前查找同一个字符，
如果位置一样那该字符就只出现一次,
因为是从第一个开始查找所以找出的是第一个只出现一次的字符    
*/