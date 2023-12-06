#include <iostream>

using namespace std;


int main()
{   
    int age;
    cin >> age;
    
    int year = age / 365;
    int month = age % 365 / 30;
    int day =  age % 365 % 30;

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;
    return 0;
}