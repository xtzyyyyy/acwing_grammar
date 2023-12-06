#include <iostream>
#include <cstdio>

using namespace std;


int main()
{   
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double x = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    printf("Media: %.1lf\n", x);

    if (x >= 7)  cout << "Aluno aprovado." << endl;
    else if (x >= 5 && x < 7) 
    {
        cout << "Aluno em exame." << endl;
        double y;
        cin >> y;

        cout << "Nota do exame: " << y << endl;

        double z = (x + y) / 2;

        if (z >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;

        cout << "Media final: " << z << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}