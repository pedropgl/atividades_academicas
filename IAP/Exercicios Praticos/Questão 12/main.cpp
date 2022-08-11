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
        cout << "Triângulo inválido.";
    }

    else if (a == b && a == c){
        cout << "Triângulo equilatero\n\n";
    }

    else if (a == b && a != c || a == c && a != b || c == b && c != a){
        cout << "Triângulo isósceles\n\n";
    }

    else{
        cout << "Triângulo equilatero\n\n";
    }

    system("pause");
    return 0;
}
