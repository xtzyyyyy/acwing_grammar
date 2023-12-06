#include <iostream>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    int a = n / 60 % 60;
    int b = n % 60;
    int c = n / 3600;
    printf("%d:%d:%d", c, a, b);
    return 0;
}