#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

#define MAXTAM 5

using namespace std;
//Structs
typedef struct
{
    int ra;
    char nome[30];
} Aluno;

typedef struct
{
    int inicio, fim;
    Aluno aluno[MAXTAM];
    int tamanho;
} TFila;
//TADS
void TFila_Inicializa(TFila *f);
bool TFila_Vazia(TFila *f);
bool TFila_Cheia(TFila *f);
void TFila_Enfileira(TFila *f, Aluno aluno);
Aluno TFila_Desenfileira(TFila *f);
void TFila_Imprime(TFila *f);
void Menu();

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");

    TFila f;
    Aluno a;
    TFila_Inicializa(&f);

    int opcao_menu;

    do
    {
        Menu();
        while ((cout << "  \n        Escolha uma opção: ") && !(cin >> opcao_menu))     //Opções para o menu de usuario
        {
            cout << "  \n        Digite um valor válido.";      //Tratamento de erro
            cin.clear();
            cin.ignore();
            Sleep(1000);
            system("cls");
            Menu();
        }
        system("cls");
        switch (opcao_menu)
        {
        case 1:                     //Recebmento das informações dos alunos
            cout << "Nome: ";
            cin >> a.nome;
            cout << "RA: ";
            cin >> a.ra;

            TFila_Enfileira(&f, a);
            break;
        case 2:
            TFila_Desenfileira(&f);
            break;
        case 3:
            TFila_Imprime(&f);
            break;
        case 4:
            cout << "Aguardamos você em breve novamente\n\n";
            break;
        }
    } while (opcao_menu != 4);

    return 0;

    return 0;
}

//Inicializa a Fila
void TFila_Inicializa(TFila *f)
{
    f->inicio = 0;
    f->fim = -1;
    f->tamanho = 0;
}
//Função que faz a validação se a fila está vazia ou não
bool TFila_Vazia(TFila *f)
{
    if (f->inicio > f->fim)
    {                // 0 é maior que -1 no começo
        return true; // 1
    }
    else
    {
        return false; // 0 fila não vazia       //Tratamento de erro
    }
}
//Função para verificar se a fila está cheia ou não
bool TFila_Cheia(TFila *f)
{
    if (f->fim == MAXTAM - 1)       
    {
        return true; // fila cheia
    }
    else
    {
        return false; // 0 fila não cheia       //Tratamento de erro
    }
}
//Função que adiciona um novo aluno a fila
void TFila_Enfileira(TFila *f, Aluno aluno)
{
    if (TFila_Cheia(f))
    {
        cout << "\nFila Cheia.\n";      //Tratamento de erro
    }
    else
    {
        f->fim++;
        f->aluno[f->fim] = aluno;
        f->tamanho++;
    }
}
//Função que desenfileira o primeiro aluno da fila e ajusta o seu tamanho
Aluno TFila_Desenfileira(TFila *f)
{
    system("cls");
    Aluno aux;
    if (TFila_Vazia(f))     
    {
        cout << "Fila vazia.\n";        //Tratamento de erro
    }
    else
    {
        aux = f->aluno[f->inicio];      //Retira o primeiro aluno e realiza os ajustes de tamanho
        f->inicio++;
        f->tamanho--;
        return aux;
    }
}
//Função para que todos os alunos sejam impressos 
void TFila_Imprime(TFila *f)
{
    if (TFila_Vazia(f))
    {
        cout << "Fila vazia.\n";        //Tratamento de erro
    }
    else
    {
        cout << "Fila: \n\n";
        for (int i = f->inicio; i <= f->fim; i++)       //Laço de repetição para que todos alunos sejam impressos
        {
            cout << "Nome: " << f->aluno[i].nome << " \n";
            cout << "RA: " << f->aluno[i].ra << " \n";
        }
        cout << endl;
    }
}
//Menu
void Menu()
{
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        �                        ALUNOS                                �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 1 - INSERIR ALUNO NA FILA                                    �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 2 - ATENDER ALUNO                                            �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 3 - EXIBIR FILA                                              �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 4 - SAIR                                                     �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������\n\n";
}
