#include <iostream>

using namespace std;

int main()
{
    int idade;
    string nome;

    cout << "Digite seu nome" << endl;
    cin >> nome;

    cout << "Digite sua idade";
    cin >> idade;

    system("cls");

    cout << "Dados Pessoais";
    cout << "Seu nome é " << nome << " e você tem  " << idade << " anos.";

    system("pause");

    return 0;
}
