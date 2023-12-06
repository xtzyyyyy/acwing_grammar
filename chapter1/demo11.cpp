#include <iostream>

using namespace std;


int main()
{   
    int x1, x2, n1;
    double y1, y2, n2;
    cin >> x1 >> n1 >> y1 >> x2 >> n2 >> y2;
    
    printf("VALOR A PAGAR: R$ %.2lf", n1 *  y1 + n2 * y2);

    return 0;
}