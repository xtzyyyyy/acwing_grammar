#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    int a, b;
    cin >> a >> b;

    if(b > a) swap(a, b);
    
    if (a % b) puts("Nao sao Multiplos");
    else puts("Sao Multiplos");

    return 0;
}