#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int x, num = 0;
    cin >> x;
    
    for(int i = x; i <= 1000; i ++)
    {
        if(i % 2 && num != 6)
        {
            cout << i << endl;
            num ++;
        }
    }
    return 0;
}