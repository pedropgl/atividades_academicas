#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

#define MAXTAM 10
#define MAX_ENTREGA 7

typedef struct Tpedido
{

    int codigo;
    int produtos[MAXTAM];
    int aux;
    float valor_pedido = 0;
    float distancia;
} TPedido;

typedef struct Pilha
{
    TPedido pedido[MAX_ENTREGA];
    int topo;
} TipoPilha;

//////////////////////////////////////////////////////////////////////////////////////////////////////
void FazPilhaVazia(TipoPilha *pilha)
{
    pilha->topo = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
bool VerificaPilhaVazia(TipoPilha *pilha)
{
    if (pilha->topo == 0)
    {
        return true;
    }
    else
        return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
void Empilha(TipoPilha *pilha, Tpedido item)                //FUNÇÃO QUE CRIA O PEDIDO E O EMPILHA
{

    unsigned seed = time(0);
    srand(seed);                                            //SORTEANDO O CODIGO DO PEDIDO COM TIME, SRAND E RAND PARA NÃO TER CODIGO REPETIDO
    item.codigo = (rand() % 100);

    cout << "Quantos produtos você deseja incluir neste pedido?  ";         //OBTENDO O NUMERO DE PRODUTOS PARA DAR PARAMETROS PRO FOR
    cin >> item.aux;

    for (int i = 0; i < item.aux; i++)                                  //OBTENDO OS PRODUTOS DESEJADOS E PRECIFICANDO DE ACORDO COM O CARDÁPIO
    {
        cout << "Digite o código do " << i + 1 << "º produto: ";
        cin >> item.produtos[i];

        if (item.produtos[i] == 1)
        {
            item.valor_pedido += 10;
        }
        else if (item.produtos[i] == 2)
        {
            item.valor_pedido += 5;
        }
        else if (item.produtos[i] == 3)
        {
            item.valor_pedido += 7;
        }
        else if (item.produtos[i] == 4)
        {
            item.valor_pedido += 6;
        }
        else if (item.produtos[i] == 5)
        {
            item.valor_pedido += 10;
        }
        else if (item.produtos[i] < 1 || item.produtos[i] > 5)                  //TRATANDO ERRO CASO O CODIGO SEJA INVÁLIDO
        {
            cout << "ESTE CÓDIGO NÃO CORRESPONDE A NENHUM PRODUTO DO CARDÁPIO!\n\n";
            system("pause");
            system("cls");
            return;
        }
    }

    cout << "Qual a distancia (km) da lanchonete até o endereço? ";             //OBTENDO A DISTANCIA
    cin >> item.distancia;

    if (pilha->topo == MAX_ENTREGA)
    {
        cout << "\nPilha cheia\n";                                          //TRATANDO ERRO CASO A PILHA JÁ ESTEJA CHEIA 
    }
    else
    {
        pilha->pedido[pilha->topo] = item;
        pilha->topo++;                                      //CASO NÃO ESTEJA CHEIA O PEDIDO É EMPILHADO E O TOPO DA FILA INCREMENTADO
    }
    system("pause");
    system("cls");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void ExibePilha(TipoPilha *pilha)
{
    if (VerificaPilhaVazia(pilha))
    {
        cout << "\nPilha vazia.\n";                 //TRATANDO ERRO CASO O USUÁRIO QUEIRA IMPRIMIR UMA PILHA VAZIA
        system("pause");
        return;
    }

    cout << "\t\t PEDIDOS: \n\n";

    for (int i = pilha->topo - 1; i >= 0; i--)
    {

        cout << "Produtos deste pedido: ";                              //IMPRIMINDO OS PEDIDOS
        for (int j = 0; j < pilha->pedido[i].aux; j++)
        {
            cout << pilha->pedido[i].produtos[j];
            cout << " ,";
        }
        cout << "\nvalor: $" << pilha->pedido[i].valor_pedido;
        cout << endl;
        cout << "Distancia: " << pilha->pedido[i].distancia;
        cout << endl;
        cout << "Código do pedido: " << pilha->pedido[i].codigo;
        cout << endl;
        cout << "*********************************************************************\n\n";
    }
    system("pause");
    system("cls");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
void LancarEntrega(TipoPilha *pilha, Tpedido *item)
{
    if (VerificaPilhaVazia(pilha))
    {
        cout << "\nPilha vazia.\n";                                 //DESEMPILHANDO OS PRODUTOS DO TOPO PARA ENTREGA
        return;
    }

    pilha->topo--;                                                    //DECREMENTA O TOPO DA PILHA
    *item = pilha->pedido[pilha->topo];
    cout << "PRODUTO ENTREGUE COM SUCESSO!\n\n\n";
    system("pause");
    system("cls");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
int Tamanho(TipoPilha *pilha)
{
    return pilha->topo;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

void ConsultaPedido(TipoPilha *pilha)
{

    int busca;
    cout << "Digite o código do pedido a ser encontrado: ";     //OBTENDO O CÓDIGO PARA USAR DE PARAMETRO NO ''if''
    cin >> busca;

    system("cls");

    for (int i = pilha->topo - 1; i >= 0; i--)      //LAÇO QUE VAI PERCORRER TODA A PILHA
    {
        if (pilha->pedido[i].codigo == busca)
        {
            cout << "\t\t PEDIDO ENCONTRADO! \n";
            cout << "Produtos deste pedido: ";
            for (int j = 0; j < pilha->pedido[i].aux; j++)          //CASO O PEDIDO SEJA ENCONTRADO RETORNAMOS OS DADOS, CASO NÃO SEJA ENVIAMOS A MENSAGEM DE ERRO
            {
                cout << pilha->pedido[i].produtos[j];
                cout << " ,";
            }
            cout << "\nvalor: " << pilha->pedido[i].valor_pedido;
            cout << endl;
            cout << "Distancia: " << pilha->pedido[i].distancia;
            cout << endl;
            system("pause");
            system("cls");
            return;
        }
    }
    cout << "\t\tITEM NÃO ENCONTRADO.\n ";
    system("pause");
    system("cls");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ExibeCardapio()
{

    cout << "\t\t\t CARDAPIO \n\n";
    cout << "Código: 1 \t Produto: BigMac \t Preço: $10\n";
    cout << "Código: 2 \t Produto: Bebida \t Preço: $5\n";
    cout << "Código: 3 \t Produto: Fritas \t Preço: $7\n";
    cout << "Código: 4 \t Produto: Sundae \t Preço: $6\n";              //CARDÁPIO 
    cout << "Código: 5 \t Produto: Frango \t Preço: $10\n\n\n";
    system("pause");
    system("cls");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Menu()
{
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        �                     C     +   BURGUER                        �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 1 - INCLUIR NOVO PEDIDO                                      �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 2 - LISTAR PEDIDOS                                           �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 3 - VER CARDAPIO                                             �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 4 - PESQUISAR PEDIDO POR CODIGO                              �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 5 - IMPRIMIR LISTA DE ENTREGA                                �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 6 - LANÇAR ENTREGA                                           �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 7 - SAIR                                                     �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������\n\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    Tpedido item;                                   
    TipoPilha pilha;
    int ret = 0;
    int opcao_menu;
    FazPilhaVazia(&pilha);          //CRIA UMA PILHA VAZIA

    do
    {
        Menu();
        while ((cout << "  \n        Escolha uma opção: ") && !(cin >> opcao_menu))
        {
            cout << "  \n        Digite um valor válido.";
            cin.clear();
            cin.ignore();
            Sleep(1000);
            system("cls");
            Menu();
        }
        system("cls");
        switch (opcao_menu)
        {
        case 1:
            Empilha(&pilha, item);
            break;
        case 2:
            ExibePilha(&pilha);
            break;
        case 3:
            ExibeCardapio();
            break;
        case 4:
            ConsultaPedido(&pilha);
            break;
        // case 5: ImprimirEntrega(&pilha); break;
        case 6:
            LancarEntrega(&pilha, &item);
            break;
        case 7:
            cout << "Aguardamos você em breve novamente\n\n";
            break;
        }
    } while (opcao_menu != 7);          //TRAMENTO DE OPÇÕES INVALIDAS.

    return 0;
}
