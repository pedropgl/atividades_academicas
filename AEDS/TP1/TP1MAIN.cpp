#include <iostream>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "tp.cpp"

 
using namespace std;
 
int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    system("cls"); 

    TListaEncadeada lista; 
    TApontador p;           //CHAMANDO AS STRUCTS E O APONTADOR PARA INT MAIN
    TFuncionario f;

    CriaListaEncadeadaVazia(&lista);    //CRIANDO UMA LISTA VAZIA 

    FILE *arquivo;
    arquivo = fopen("Funcionario.bin", "rb");   //ABRINDO ARQUIVO FUNCIONARIO.BIN
    p = lista.primeiro;

    if (arquivo != NULL)
    {
        while (fread(&f, sizeof(TFuncionario), 1, arquivo))
        {
            InsereEncadeada(f, &lista);     //CASO O ARQUIVO ABRA ELE INSERE OS FUNCIONARIOS NA LISTA
        }
        fclose(arquivo);
    }
    else
    {
        cout << "ERRO !!! ARQUIVO INEXISTENTE ...";
        getch();        //TRATAMENTO CASO OCORRA UM ERRO NA ABERTUDO DO ARQUIVO .BIN
        system("cls"); 
    }

    int opcao;
    do
    {
        menu();                      
        cout << "ESCOLHA Á OPÇÃO: "; 
        cin >> opcao;                
        system("cls");
        switch (opcao)
        { 
        case 1:
            CadastraFuncionario(&lista);
            break;
        case 2:
            CadastraProjeto(&lista);
            break;
        case 3:
            ExcluirProjeto(&lista);
            break;
        case 4:
            ExcluirFuncSemProjetos(&lista);
            break;
        case 5:
            ConsultaFuncionario(lista);
            break;
        case 6:
            ExcluirFuncionario(&lista);
            break;
        case 7:
            ImprimeContraCheque(&lista);
            break;
        }
    } while (opcao != 8); 

    arquivo = fopen("Funcionario.bin", "wb");

    while (p->prox != NULL)
    {
        f = p->prox->item;
        fwrite(&f, sizeof(TFuncionario), 1, arquivo);
        p = p->prox;
    }
    fclose(arquivo);

    return 0;
}