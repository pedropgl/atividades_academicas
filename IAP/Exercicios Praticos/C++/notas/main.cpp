#include <iostream>

using namespace std;

int main()
{
    float nota;
    string nome;
    char conceito;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Nota: ";
    cin >> nota;

    if (nota >=  90){
        conceito = 'A';
    }
    else if (nota >= 75 && nota < 90){
        conceito = 'B';
    }
    else if (nota >= 60 && nota < 75){
        conceito = 'C';
    }

    system("cls");

    cout << nome << " sua nota foi: " << nota << "\nE seu conceito foi: " << conceito << endl;

    system("PAUSE");
    return 0;
}
