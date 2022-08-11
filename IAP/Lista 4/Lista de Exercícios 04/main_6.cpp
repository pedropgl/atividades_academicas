#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[3][3];
    int soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor para linha: ";
            cin >> M[i][j];
            if(i < j){
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

    cout << "\n\n";

    cout << "Soma: " << soma << "\n\n";

    system("pause");
    return 0;
}
