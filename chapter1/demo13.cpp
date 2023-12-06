#include <iostream>

using namespace std;

const double PI= 3.14159;

int main()
{   
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf", a * c / 2);
    puts("");
    printf("CIRCULO: %.3lf", PI * c * c);
    puts("");
    printf("TRAPEZIO: %.3lf", (a + b) * c / 2);
    puts("");
    printf("QUADRADO: %.3lf", b * b);
    puts("");
    printf("RETANGULO: %.3lf", a * b);
    return 0;
}