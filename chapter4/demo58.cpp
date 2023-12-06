#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int x[11];

int main()
{
    int v;
    cin >> v;

    for(int i = 0; i < 10; i ++) 
    {
        x[i] = v ;
        v *= 2;
    }

    for(int i = 0; i < 10; i ++) cout << "N[" << i << "] = " << x[i] << endl;

    return 0;
}