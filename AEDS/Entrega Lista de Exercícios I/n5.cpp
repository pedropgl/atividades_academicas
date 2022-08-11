#include <iostream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#define PESSOA q

using namespace std; 

   struct CADASTRO{
   string nome; 
   float altura;
   int peso; 
   long double cpf;
   char sexo;  
   };

  CADASTRO a[PESSOA];
  int opcao;
  long double pesquisacpf;

  void imprimemenu();
  void imprimeIMC(CADASTRO[]);
  void cadastrocliente (CADASTRO[]);

int main() { 
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");
    
    
  cout << "Quantos alunos deseja cadastrar: ";
  cin >> q;
    
    
    
    imprimemenu();
    //system ("cls");


    if (opcao == 1){
        cadastrocliente(a);
        system("cls");
        cout << "Cadastro realizado com sucesso!\n";
        Sleep(2000);
        return main ();     
    }
    
    if (opcao == 2){
        system("cls");
        imprimeIMC(a); 
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
      cout << "| [1] Cadastrar                              |\n";
      cout << "| [2] Pesquisar                              |\n";
      cout << "| [3] Sair                                   |\n";
      cout << "+--------------------------------------------+\n"; 
      cout << "\n\nDigite uma opção: ";
      cin >> opcao;
}
  
    void imprimeIMC(struct CADASTRO a [PESSOA]){ 
      
    cout << "\n Digite o CPF referente a pessoa que deseja saber o IMC: ";
    cin >> pesquisacpf;

        for (int i=0; i<PESSOA; i++) {
            if (pesquisacpf == a[i].cpf){ 
            system("cls");
            cout << "FICHA DA PESSOA "<< endl << endl;
            cout << "Nome: " << a[i].nome << endl;
            cout << "Altura: " << a[i].altura << endl;
            cout << "Peso : " << a[i].peso << endl;
            cout << "Sexo : " << a[i].sexo << endl;
            cout << "\nIMC: " << a[i].peso / (a[i].altura * a[i].altura);  
            cout << "\n\n";
            Sleep(2000);
            } 
        } 
    }

    void cadastrocliente (struct CADASTRO a [PESSOA]){
      cout << "Cadastro\n";
      for (int i=0; i<PESSOA; i++) {
      cout << "\nNome: ";
      cin.ignore(); 
      getline(cin, a[i].nome);
      cout << "Altura (metros): ";
      cin >> a[i].altura; 
      cout << "Peso (kg): ";
      cin >> a[i].peso; 
      cout << "Sexo (F/M): "; 
      cin >> a[i].sexo; 
      cout << "CPF: ";
      cin >> a[i].cpf; 
    }
}