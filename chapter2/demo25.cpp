#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    int a, b;
    cin >> a >> b;

    if (a == b) printf("O JOGO DUROU 24 HORA(S)");
    else if (a > b) printf("O JOGO DUROU %d HORA(S)", b - a + 24);
    else printf("O JOGO DUROU %d HORA(S)", b - a);

    return 0;
}