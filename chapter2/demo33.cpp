#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{   
    double n;
    cin >> n;
    if (n >= 0 && n <= 2000) printf("Isento");
    else if(n > 2000 && n <= 3000) printf("R$ %.2lf", (n - 2000) * 0.08);
    else if(n > 3000 && n <= 4500) printf("R$ %.2lf", 1000 * 0.08 + (n - 3000) * 0.18);
    else printf("R$ %.2lf", 1000 * 0.08 + 1500 * 0.18 + (n - 4500) * 0.28);


    return 0;
}