#include <iostream>
#include <stdio.h>
#include <string.h>

 
using namespace std;
  
 typedef struct ALUNOS{

   char nome[50];
   char matricula[20];
   float media_final;

}cadastro;

int main(){

    cadastro n_alunos[10], aprovados[10], reprovados[10];
    int i, x = 0, y = 0;

    for (i = 0; i < 10; i++){
        cout << "Aluno: ";
        cin.ignore(0);
        cin >> n_alunos[i].nome;
        cout << "Matricula: ";
        cin >> n_alunos[i].matricula;
        cout << "Media final: ";
        cin >> n_alunos[i].media_final;
        cout << endl << endl;

        if (n_alunos[i].media_final >= 6.0){
            aprovados[x] = n_alunos[i];
            x++;
        }
        else{
            reprovados[y] = n_alunos[i];
            y++;
        }
    }

    system("cls");

    for (i = 0; i < x; i++){
        cout << "\nAprovados:\n";
        cout << "\nNome: " << aprovados[i].nome;
        cout << "\nMatricula: " << aprovados[i].matricula;
        cout << "\nMedia Final: " << aprovados[i].media_final;
        cout << "\n\n";
    }

    for (i = 0; i < y; i++){
        cout << "\nReprovados:\n";
        cout << "\nNome: " << reprovados[i].nome;
        cout << "\nMatricula: " << reprovados[i].matricula;
        cout << "\nMedia Final: " << reprovados[i].media_final;
        cout << "\n\n";
    }

    cout << "\n\n";
    return 0;
}
