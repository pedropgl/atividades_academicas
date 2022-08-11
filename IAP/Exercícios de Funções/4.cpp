#include <iostream>
#include <windows.h>
using namespace std;

int soma (int n){
    int i = 1, soma = 0;
    cout << "Os divisores de " << n << " são:";
    while (i < n){
        if(n % i == 0){
            soma += i;
            cout << i << " ";
        }
        i++;
    }
    cout << "\nSoma: " << soma << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    for (int i = 0; i < 3; i++){
        cout << "Digite um número: " << endl;
        cin >> n;
        soma(n);
    }

}
