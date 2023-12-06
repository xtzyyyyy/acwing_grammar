#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double m[13][13];
int c;
double sum;
char str;

int main()
{
    cin >> c >> str;

    if(str == 'S')
    {
      for(int i = 0; i < 12; i ++)
          for(int j = 0; j < 12; j ++)
                cin >> m[i][j];     
    
       for(int i = 0; i < 12; i ++) sum+=m[i][c];

       printf("%.1lf", sum);
    }
    else
    {
        for(int i = 0; i < 12; i ++)
            for(int j = 0; j < 12; j ++)
                cin >> m[i][j];     
    
        for(int i = 0; i < 12; i ++) sum+=m[i][c];
        printf("%.1lf", sum/12);
    }

    return 0;
}