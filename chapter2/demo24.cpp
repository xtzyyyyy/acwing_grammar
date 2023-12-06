#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    double a, b, c;
    cin >> a >> b >> c;

    if ((a + b) <= c || (a + c) <= b || (b + c) <= a) printf("Area = %.1f",(a + b) * c / 2 );
    else printf("Perimetro = %.1f",a + b + c );    
    return 0;
}