#include <iostream>

using namespace std;

int potencia(int base, int expoente){
    int mult=1;
    for (int i = 1; i<=expoente; i++ ){
        mult *= base;
    }
    return mult;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, resultado;

    cout << "Digite a base : " <<endl;
    cin >> a;

    cout << "Digite o expoente : " <<endl;
    cin >> b;

    resultado = potencia(a,b);
    cout << a <<" Elevado a " <<b <<" = " <<resultado <<endl;


    cout <<endl;
    system("pause");
    return 0;
}
