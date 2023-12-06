#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int x[11];

int main()
{
    for(int i = 0; i < 10; i ++) 
    {
        cin >> x[i];
        if(x[i] <= 0) x[i] = 1;
    }

    for(int i = 0; i < 10; i ++) cout << "X[" << i << "] = " << x[i] << endl;

    return 0;
}