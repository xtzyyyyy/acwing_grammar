#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{   
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    if (a > c)
    {
        if (b > d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 24 - 1, d - b + 60);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 24, d - b);
    }
    else if(a < c)
    {
        if (b > d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a - 1, d - b + 60);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a , d - b);
    }
    else    // 这里要想的多一点
    {
        if (b > d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 24 - 1, d - b + 60);
        else if(b < d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a, d - b);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", c - a + 24 , d - b);
    }
    return 0;
}