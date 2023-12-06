#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    int x;
    double y;
    scanf("%d%lf", &x, &y);

    printf("%.3lf km/l", x / y);
}