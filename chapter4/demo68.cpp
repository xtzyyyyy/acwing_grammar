#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int x[1010], index;
int mins = 1e9;

int main()
{ 
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> x[i];

    for(int i = 0; i < n; i ++) 
        if(x[i] < mins)   
            mins = x[i],index  = i;


    cout << "Minimum value: " << mins << endl;
    cout << "Position: " << index << endl;
    return 0;
}