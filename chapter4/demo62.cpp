#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

char c;
double m[13][13],sum;

int main()
{
    cin >> c;
    if(c == 'S')
    {
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12; j ++)
                cin >> m[i][j];

        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12 - i - 1; j ++)
                sum += m[i][j];
   
        printf("%.1lf", sum);
    }
    else
    {
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12; j ++)
                cin >> m[i][j];

        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12 - i - 1; j ++)
                sum += m[i][j];

        printf("%.1lf", sum/ 66);            
    }
    return 0;
}