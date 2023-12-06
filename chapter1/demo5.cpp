#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    int a, b;
    double c;
    scanf("%d%d%lf", &a, &b, &c);

    printf("NUMBER = %d", a);
    puts("");
    printf("SALARY = U$ %.2lf", b * c);
}