#include <iostream>


using namespace std;

int main()
{   setlocale(LC_ALL, "Portuguese");


    float matriz[3][3];
    int Vetor[3];
    int soma_j0 = 0, soma_j1 = 0, soma_j2 = 0;



    cout << "Digite um valor para a matriz \n\n";

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << "Linha " << (i + 1) << ", Coluna " << (j + 1) << ": ";
        cin >> matriz[i][j];
      }
    }

    system("cls");

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << matriz[i][j] << " ";
      }
      cout << endl;
    }

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(j == 0){
          soma_j0 += matriz[i][j];
          Vetor[j] = soma_j0;
        }
        if(j == 1){
           soma_j1 += matriz[i][j];
           Vetor[j] = soma_j1;
        }
        if(j == 2){
           soma_j2 += matriz[i][j];
           Vetor[j] = soma_j2;
        }
      }
    }

    cout << endl;
    cout << "Vetor da soma das colunas: \n\n";

    for(int i = 0; i<3; i++){
        cout << Vetor[i] << " ";
    }

    cout << "\n\n";
    system ("pause");
    return 0;
}
