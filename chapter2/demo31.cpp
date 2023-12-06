#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    double a, b, c;
    cin >> a >> b >> c;
    if (b >= a) swap(a, b);
    if (c >= a) swap(a, c);
    // cout << a << " " << b << " " << c << endl;
    if (a >= b + c) puts("NAO FORMA TRIANGULO");
    else
    {
        if (a * a == b * b + c * c) puts("TRIANGULO RETANGULO");
        if (a * a > b * b + c * c) puts("TRIANGULO OBTUSANGULO");
        if (a * a < b * b + c * c) puts("TRIANGULO ACUTANGULO");
        if (a == b && a == c) puts("TRIANGULO EQUILATERO");
        if ((a == b && a != c) || (a == c && b!= c ) || (b == c && a!= c ) ) puts("TRIANGULO ISOSCELES");
    }
   
  
    return 0;
}