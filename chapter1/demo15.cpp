#include <iostream>

using namespace std;

int main()
{   
    string a;
    double x, y;
    cin >> a >> x >> y;

    printf("TOTAL = R$ %.2lf", x + 0.15 * y);
    return 0;
}