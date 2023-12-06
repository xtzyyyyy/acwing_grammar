#include <iostream>
#include <cstdio>

using namespace std;

const double PI = 3.14159;

int main()
{   
    double r;
    scanf("%lf", &r);

    printf("A=%.4lf", PI * r * r);

    return 0;
}