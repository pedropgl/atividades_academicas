#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float matriz[4][4];
    int MA, MB;

    cout << "Digite um valor: \n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Linha " << (i + 1) << ", coluna " << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    MA = 0;
    MB = 0;

    system("cls");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > matriz[MA][MB]){
                MA = i;
                MB = j;
            }
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n\nLocalização do maior valor da Matriz: Linha " << MA << ", coluna " << MB << ". Valor: " << matriz[MA][MB] << "\n\n";


    system("pause");
    return 0;
}
