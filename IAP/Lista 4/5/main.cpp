#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float matriz[3][3];
    int soma;

    cout << "Digite um número\n\n";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Linha " << (i + 1) << ", coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }

    system("cls");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Soma da diagonal principal é " << soma << "\n\n";

    system("pause");
    return 0;
}
