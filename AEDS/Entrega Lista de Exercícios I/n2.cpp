#include <iostream>
#include <windows.h>

using namespace std;

#define quantidade q;

struct ESCOLA{
  string nome;
  int matricula;
  float nota1, nota2;
  float media;
};

int main(){

  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int q = 0;

  cout << "Quantos alunos deseja cadastrar: ";
  cin >> q;

  ESCOLA alunos[q];

  for (int i = 0; i < q; i++){

    cout << "Nome: ";
    cin >> alunos[i].nome;

    cout << "Matricula: ";
    cin >> alunos[i].matricula;

    cout << "Primeira Nota: ";
    cin >> alunos[i].nota1;

    cout << "Segunda Nota: ";
    cin >> alunos[i].nota2;

    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;

    system("cls");
  }

  cout << "Alunos";

  for (int i = 0; i < q; i++)
  {

    cout << "\n\nAluno número: " << i + 1;
    cout << "\nNome: " << alunos[i].nome;

    cout << "\nMatricula: " << alunos[i].matricula;

    cout << "\nPrimeira Nota: " << alunos[i].nota1;

    cout << "\nSegunda Nota: " << alunos[i].nota2;

    cout << "\nMedia das Notas: " << alunos[i].media;

    cout << "\n\n";
  }

  cout << "\n\n";
  system("pause");
  return 0;
}