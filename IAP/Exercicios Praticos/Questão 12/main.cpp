#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << "Digite o valor de C: ";
    cin >> c;

    if (a + b < c || a + c < b || b + c < a){
        cout << "Tri�ngulo inv�lido.";
    }

    else if (a == b && a == c){
        cout << "Tri�ngulo equilatero\n\n";
    }

    else if (a == b && a != c || a == c && a != b || c == b && c != a){
        cout << "Tri�ngulo is�sceles\n\n";
    }

    else{
        cout << "Tri�ngulo equilatero\n\n";
    }

    system("pause");
    return 0;
}
