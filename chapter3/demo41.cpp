#include <iostream>

using namespace std;

int main()
{
    int n ,postion, maxs= 1e-8;

    for(int i = 1;i <= 100; i ++)
    {
        cin >> n;
        if(n > maxs) 
        {
            maxs = n;
            postion = i;
        }
    }   
    
    printf("%d\n%d", maxs, postion);
    return 0;
}