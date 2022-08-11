#include <iostream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#define PRODUTOS 3

using namespace std;

struct CADASTRO{
float preco;
string nome;
int codigo;
};

CADASTRO a[PRODUTOS];
int opcao;
long double codigoproduto;

void imprimemenu();
void imprimelista(CADASTRO[]);
void imprimepesquisa(CADASTRO[]);
void cadastroproduto (CADASTRO[]);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");
    imprimemenu();
    system ("cls");

    if (opcao == 1){
        cadastroproduto(a);
        system("cls");
        cout << "Cadastro realizado com sucesso!\n";
        Sleep(2000);

        return main ();
    }

    if (opcao == 2){
        system("cls");
        imprimepesquisa(a);
        Sleep (4000);
        system("cls");
        cout << "Retornando ao menu ";
        Sleep (2000);
        return main ();
    }

    if (opcao == 3){
        cout << "Fechando programa...." ;
        Sleep (3000);
    return 0;
    }
}

void imprimemenu(){
      cout << "+-----------------MENU-----------------------+\n";
      cout << "| [1] Cadastrar                              |\n";
      cout << "| [2] Pesquisar                              |\n";
      cout << "| [3] Sair                                   |\n";
      cout << "+--------------------------------------------+\n";
      cout << "\n\nDigite uma opção: ";
      cin >> opcao;
}

void imprimepesquisa(struct CADASTRO a [PRODUTOS]){

    cout << "\n Digite o código do produto que está procurando: ";
    cin >> codigoproduto;

        for (int i=0; i<PRODUTOS; i++) {
            if (codigoproduto == a[i].codigo){
            system("cls");
            cout << "Ficha do produto\n\n";
            cout << "\nNome do produto: " << a[i].nome;
            cout << "\nCódigo do produto: " << a[i].codigo;
            cout << "\nPreço: R$ " << a[i].preco;
            cout << "\n\n";
            Sleep(2000);
            }
        }
}

void cadastroproduto (struct CADASTRO a [PRODUTOS]){
      cout << "Cadastro\n";
      for (int i=0; i<PRODUTOS; i++){
      cout << "\nNome do produto: ";
      cin.ignore();
      getline(cin, a[i].nome);
      cout << "Código do produto: ";
      cin >> a[i].codigo;
      cout << "Preço do produto: ";
      cin >> a[i].preco;
    }
}

void imprimelista (struct CADASTRO a [PRODUTOS]){
    cout << "Lista dos produtos";
    for (int i=0; i<PRODUTOS; i++){
        cout << "Nome do produto: " << a[i].nome;
        cout << "Código do produto: " << a[i].codigo;
        cout << "Preço: R$ " << a[i].preco;
    }
}
