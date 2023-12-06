#include <iostream>

using namespace std;

const double PI= 3.14159;

int main()
{   
    int r;
    cin >> r;

    printf("VOLUME = %.3lf", PI * r * r * r * (4 / 3.0));

    return 0;
}