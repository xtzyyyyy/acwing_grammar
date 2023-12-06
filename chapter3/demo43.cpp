#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    while(n== 0 || n < 0)
    {
        cin >> n;
    }

    int res;
    for(int i = a; i <= a + n - 1; i ++)
    {
        res += i;
    }

    cout << res << endl;

    return 0;
}