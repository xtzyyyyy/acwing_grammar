#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{   
    double a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0 || a == 0) puts("Impossivel calcular");
    else 
    {
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf", x2);
    }
   
    
    return 0;
}