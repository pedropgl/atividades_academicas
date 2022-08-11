#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i, a, b, c, d=1 , num;

    cout << "Insira um dígito: ";
    cin >> num;

    for (i=1; i <= num; i++){
        for (c = num; c >= i; c--)
            cout << " ";
            for (d = 1; d <= i * 2 - 1; d++)
                cout << "*";
                cout << "\n";
    }

    for (a = num/2; a < num; a++){
        for (b = 1; b <= d / 2; b++)
        cout << " ";
        cout << endl;
    }

    system("pause");
    return 0;
}
