#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    int x, y;
    cin >> x >> y;

    if (x == 1) printf("Total: R$ %.2lf", 4.00 * y);  
    if (x == 2) printf("Total: R$ %.2lf", 4.50 * y); 
    if (x == 3) printf("Total: R$ %.2lf", 5.00 * y); 
    if (x == 4) printf("Total: R$ %.2lf", 2.00 * y); 
    if (x == 5) printf("Total: R$ %.2lf", 1.50 * y); 

    return 0;
}