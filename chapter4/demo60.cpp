#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double M[13][13];
int l;
char c;

int main()
{
   cin >> l >> c;
   for (int i = 0; i < 12; i ++)
    for (int j = 0; j < 12; j ++)
        cin >> M[i][j];

   double sum = 0;
   if(c == 'S')
   {
        for(int j = 0; j < 12; j ++)  
        {
             sum += M[l][j];
        }
        printf("%.1lf",sum);
   }
    else
    {
        for(int j = 0; j < 12; j ++)   sum = sum + M[l][j];

        sum = sum / 12;
        printf("%.1lf",sum);
    }
    return 0;
}