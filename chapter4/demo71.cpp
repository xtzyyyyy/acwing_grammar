#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

double m[13][13], sum;
char c;

int main()
{
    cin >> c;
    if(c == 'S')
    {
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12; j ++)
                cin >> m[i][j];
        
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < i; j ++)
                sum += m[i][j];

        printf("%.1lf", sum);  
    }
    else
    {
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12; j ++)
                cin >> m[i][j];
        
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < i; j ++)
                sum += m[i][j];

        printf("%.1lf", sum);   
    }
}