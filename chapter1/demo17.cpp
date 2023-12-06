#include <iostream>

using namespace std;

// 有点细节
int main()
{   
    long long L;
    cin >> L;

    double x = 0.5; // 一分钟 两车距离拉开x公里

    cout << L / 30  * 60 + (int)(L % 30 / 0.5)  << " minutos" << endl;
    return 0;
}