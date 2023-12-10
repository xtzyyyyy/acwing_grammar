#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    char b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i ++)
        if(a[i] == b) a[i] = '#';
    
    for(int i = 0; i < a.size(); i ++)
        cout << a[i];
    return 0;
}
