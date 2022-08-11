#include <iostream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#define RECEITAS 5

using namespace std; 

struct CADASTRO{
char nome[25];
int ingredientes;
};

CADASTRO a[RECEITAS];
int opcao;
char nomereceita[25];

void imprimemenu();
void imprimereceita(CADASTRO[]);
void imprimepesquisa(CADASTRO[]);
void cadastroreceita (CADASTRO[]);

int main(){ 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");

    imprimemenu();
    system ("cls");

    if (opcao == 1){
        cadastroreceita(a);
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

    if (opcao == 3);
        cout << "Fechando programa...." ;
        Sleep (3000);
    return 0;
}

void imprimemenu(){
      cout << "+-----------------MENU-----------------------+\n";  
      cout << "| [1] Cadastrar receitas                     |\n";
      cout << "| [2] Pesquisar                              |\n";
      cout << "| [3] Sair                                   |\n";
      cout << "+--------------------------------------------+\n"; 
      cout << "\n\nDigite uma opção: ";
      cin >> opcao;
}
  
void imprimepesquisa(struct CADASTRO a [RECEITAS]){ 
      
    cout << "\n Digite o nome da receita que deseja: ";
    cin >> nomereceita;

        for (int i=0; i<RECEITAS; i++) {
            if (nomereceita == a[i].nome){ 
            system("cls");
            cout << "Receita\n";
            cout << "\nNome da receita: " << a[i].nome;
            cout << "\nIngredientes: " << a[i].ingredientes;
            cout << "\n\n";
            Sleep(2000);
            } 
        } 
}

void cadastroreceita (struct CADASTRO a [RECEITAS]){
      cout << "Cadastro\n";
      int quant;
      for (int i=0; i<RECEITAS; i++){
      cout << "\nNome da receita: ";
      cin.ignore(); 
      getline(cin, a[i].nome);
      cout << "Quantidade de ingredientes: ";
      cin >> quant; 
      for (int i=0; i<quant; i++){
            cout << "Nome do ingrediente: ";
            cin >> a[i].ingredientes;
    }
}

/*void imprimereceita (struct CADASTRO a [RECEITAS]){
    cout << "Receitas: ";
    for (int i=0; i<RECEITAS; i++){
        cout << "Nome da receita: " << a[i].nome;
        cout << "\n";
        }
    }
}*/