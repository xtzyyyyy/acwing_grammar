#include <iostream>

using namespace std;

int main()
{   
    double a;
    scanf("%lf", &a);
    
    int n = (int)a;
    int n1 = (a + 1e-8 - n ) * 1000 ;

    printf("NOTAS:");
    puts("");
    cout << n / 100 <<" nota(s) de R$ 100.00" << endl;
    cout << n % 100 / 50<<" nota(s) de R$ 50.00" << endl;
    cout << n % 100 % 50 / 20<<" nota(s) de R$ 20.00" << endl;
    cout << n % 100 % 50 % 20 / 10<<" nota(s) de R$ 10.00" << endl;
    cout << n % 100 % 50 % 20 % 10 / 5<<" nota(s) de R$ 5.00" << endl;
    cout << n % 100 % 50 % 20 % 10 % 5 / 2<<" nota(s) de R$ 2.00" << endl;

    
    printf("MOEDAS:");
    puts("");
    cout<< n % 100 % 50 % 20 % 10 % 5 % 2 / 1 <<" moeda(s) de R$ 1.00" <<endl;
    cout<< n1 / 500<<" moeda(s) de R$ 0.50" <<endl;
    cout<< n1 % 500 / 250 <<" moeda(s) de R$ 0.25" <<endl;
    cout<< n1 % 500 % 250 / 100  <<" moeda(s) de R$ 0.10" <<endl;
    cout<< n1 % 500 % 250 % 100 / 50 <<" moeda(s) de R$ 0.05" <<endl;
    cout<< n1 % 500 % 250 % 100 % 50 / 10 <<" moeda(s) de R$ 0.01" <<endl;
    return 0;
}