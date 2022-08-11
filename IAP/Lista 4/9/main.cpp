#include <iostream>


using namespace std;

int main()

{   setlocale(LC_ALL, "Portuguese");


    float matriz[3][3];


    cout << "Digite um valor para a matriz\n\n";


    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> matriz[i][j];
      }
    }

    system("cls");

    cout << "Matriz inseriada é\n\n";

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << matriz[i][j] << " ";

        }
      cout << endl;
    }

    cout << endl;
    cout << "Matriz transposta é\n\n";

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << matriz[j][i] << " ";
      }
      cout << "\n\n";
    }

    system ("pause");
    return 0;
}
