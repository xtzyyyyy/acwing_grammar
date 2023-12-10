#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


int main()
{
    string x, y, z;
    int z_len = x.size() + y.size();

    while(cin >> x >> y)
    {
        int max = 1e-9, max_index = 0;
        for(int i = 0; i < x.size(); i ++)
            if(x[i] > max) 
            {
                max = x[i];
                max_index = i;
            }   
        // cout << max << ' ' << max_index << endl;
        for(int i = 0; i < max_index + 1; i ++) cout << x[i];
        
        for(int i = 0; i < y.size(); i ++) cout << y[i];

        for(int i = max_index + 1; i < x.size(); i ++) cout << x[i];
        cout << endl;
    }
    return 0;
}