#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[3][3];
    int soma = 0;
    int n = 2;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite o valor para a linha: " << i + 1 << " e a coluna " << j + 1 << ": ";
            cin >> M[i][j];
            if(i == (3 - j - 1)){
                soma += M[i][j];
            }
        }
    }

    system("cls");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nSoma da diagonal secundária: " << soma;

    cout << "\n\n";

    system("pause");
    return 0;
}
