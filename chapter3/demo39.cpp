#include <iostream>

using namespace std;

int main()
{
    double n, res;
    for (int i = 1; i <= 6; i ++)
    {
        cin >> n;
        if(n > 0) res ++; 
    }

    cout << res << " positive numbers" << endl;
    return 0;
}