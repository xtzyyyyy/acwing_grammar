#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int a, b, c;
    cin >> a >> b >> c;
    int max_a_b = (a + b + abs(a - b)) / 2;
    cout << (max_a_b > c ? max_a_b : c) << " eh o maior" ;
    return 0;
}