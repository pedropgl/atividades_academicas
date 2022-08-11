#include <iostream>
#include <string.h>
#include <windows.h>
 
using namespace std;

#define QTD 5

struct CADASTRO{
    char nome [30];
    char endereco[50];
    char telefone[15];
};

void cadastro (CADASTRO[]);
void imprime (CADASTRO[]);

int main(){
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  CADASTRO pessoas[QTD];
  CADASTRO troca;
  int retorno;

   cadastro(pessoas);
   system("cls");

  for (int i = 0; i < QTD; i++){
      for (int j = i+1 ; j < QTD; j++){
        retorno = strcmp(pessoas[i].nome, pessoas[j].nome);
        if (retorno > 0){
          troca = pessoas[j];
          pessoas[j] = pessoas [i];
          pessoas[i] = troca;
        }
      }
  }

  imprime (pessoas);

  cout << endl << endl;
  return 0;
}

void cadastro (CADASTRO pessoas[QTD]){
    for (int i = 0; i < QTD; i++){
    cout << "Nome: ";
    gets(pessoas[i].nome);

    cout << "Endereço: ";
    gets(pessoas[i].endereco);

    cout << "Telefone: ";
    gets(pessoas[i].telefone);

    system("cls");
  }
}

void imprime (CADASTRO pessoas[QTD]){
  for (int i = 0; i < QTD; i++)
{
    cout << "Dados da " <<i+1 <<"º pessoa. ";
    cout << "\n\nNome: " << pessoas[i].nome ;
    cout << "\nEndereço: " <<pessoas[i].endereco;
    cout << "\nTelefone: " << pessoas[i].telefone;
    cout << "\n\n";
  }
}
