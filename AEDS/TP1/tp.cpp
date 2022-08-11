#include <iostream>
#include <windows.h>
#include <time.h>
#include "TP.HPP"

using namespace std;

void menu()
{                       
    system("color 0B"); 
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        �                     DEPARTAMENTO PESSOAL                     �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 1 - INCLUIR NOVO FUNCIONÁRIO                                 �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 2-  INCLUIR NOVOS PROJETOS                                   �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 3 - EXCLUIR PROJETOS                                         �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 4 - EXCLUIR FUNCIONARIOS SEM PROJETOS                        �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 5 - CONSULTAR FUNCIONÁRIO                                    �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 6 - EXCLUIR TODOS OS FUNCIONÁRIOS E PROJETOS                 �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 7 - IMPRIMIR CONTRA-CHEQUE                                   �";
    cout << "  \n        �                                                              �";
    cout << "  \n        � 8 - SAIR                                                     �";
    cout << "  \n        �                                                              �";
    cout << "  \n        ����������������������������������������������������������������\n\n";
}

void CriaListaEncadeadaVazia(TListaEncadeada *lista)
{                                    
    lista->primeiro = new TCelula;   
    lista->ultimo = lista->primeiro;    //CRIA LISTA VAZIA, NESTE MOMENTO A PRIMEIRA POSIÇÃO TAMBEM É A ULTIMA            
    lista->primeiro->prox = NULL;    
}

int VerificaListaEncadeadaVazia(TListaEncadeada lista)
{                                            
    return (lista.primeiro == lista.ultimo);      
}

int VerificaListaSequencialVazia(TListaSequencial lista)
{                                            
    return (lista.primeiro == lista.ultimo);        
}

void CriaListaSequencialVazia(TListaSequencial *Lista)
{                                    
    Lista->primeiro = INICIO;       //CRIA LISTA SEQUENCIAL VAZIA, NESTE MOMENTO A PRIMEIRA POSIÇÃO TAMBEM É A ULTIMA      
    Lista->ultimo = Lista->primeiro; 
}

void InsereEncadeada(TFuncionario f, TListaEncadeada *lista)
{                                        
    lista->ultimo->prox = new TCelula;          //ALOCA UM NOVO ESPAÇO OU UMA NOVA CELULA  
    lista->ultimo = lista->ultimo->prox;        //O PONTEIRO LISTA PASSA A APONTAR PARA A NOVA CELULA 
    lista->ultimo->item = f;                    //FUNCIONARIO INTRODUZIDO NA ULTIMA POSIÇÃO DA LISTA
    lista->ultimo->prox = NULL;                 //ULTIMA POSIÇÃO APONTA PARA NULL
}

void InsereSequencial(TProjeto x, TListaSequencial *Lista)
{                                
    if (Lista->ultimo == MAXTAM)        //SE A LISTA ESTIVER COM SEU TAMANHO MAXIMO É RETORNADO UMA MENSAGEM DE ERRO 
        cout << " ERRO !!! TODOS PROJETOS JÁ ESTÃO CADASTRADOS ...";    
    else                                //CASO NÃO ESTEJA CHEIA O PROJETO É INSERIDO NA ULTIMA POSIÇÃO
    {                                   
        Lista->item[Lista->ultimo] = x; 
        Lista->ultimo++;                //A ULTIMA POSIÇÃO RECEBE UM ENCREMENTO                
    }
}

int PesquisaLista(TChave cod, TListaEncadeada lista, TApontador *p)
{                                    
    TApontador aux = lista.primeiro;    //APONTADOR APONTA PARA A PRIMEIRA POSIÇÃO DA LISTA 
    int achou = 0;                      //VARIAVEL DE RETORNO                   

    while ((!achou) && (aux->prox != NULL)) //ENQUANTO NÃO ACHAR/LISTA ACABAR
        if (aux->prox->item.codfuncionario == cod)
            achou = 1; 
        else
            aux = aux->prox;
    *p = aux;
    return (achou); 
}

int BuscaSequencial(int cod, TListaSequencial lista, int *p)
{                           
    int i = lista.primeiro;     //O AUXILIAR I RECEBE O PRIMEIRO ELEMENTO DA LISTA          
    int achou = 0;              //VARIAVEL DE RETORNO   

    while ((!achou) && (i < lista.ultimo)) //ENQUANTO NÃO ACHAR/LISTA ACABAR  
        if (lista.item[i].codigo == cod)   //SE O CODIGO FOR IGUAL AO INSERIDO NA FUNÇÃO ENTÃO ACHOU RECEBE O VALOR 1
            achou = 1; 
        else                               //SE NÃO O I RECEBE UM INCREMENTO E O PONTEIRO RECEBE I
            i++;
    *p = i;
    return (achou); 
}

void CadastraFuncionario(TListaEncadeada *lista)
{                   
    TFuncionario f; 

    cout << "*******************************************\n";
    cout << "*        CADASTRO DE FUNCIONÁRIO          *\n";
    cout << "*******************************************\n\n";
    
    cout << "Código: ";
    cin >> f.codfuncionario;
    cin.ignore();
    cout << "Nome: ";
    gets(f.nomefuncionario);                   
    cout << "Endereço: ";
    gets(f.endereco);
    cout << "Número de dependentes: ";
    cin >> f.dependentes;

    CriaListaSequencialVazia(&f.projetos); 
    InsereEncadeada(f, lista);            

    cout << "\nFUNCIONÁRIO FOI CADASTRADO COM EXITO !!!\n\n";
    system("pause");   
    system("cls"); 
}

void CadastraProjeto(TListaEncadeada *lista)
{                 
    TProjeto x;   
    TApontador p; 
    TChave cod;   
    int j, ret;   

    system("cls");

    cout << " ***************************************\n";
    cout << " *         CADASTRO DE PROJETOS        *\n";
    cout << " ***************************************\n\n";
    cout << "CODIGO DO FUNCIONARIO: ";      //FUNCIONARIO ENTRA COM O CODIGO
    cin >> cod;

    ret = PesquisaLista(cod, *lista, &p);   //PESQUISA/CONFERE SE JÁ EXISTE UM FUNCIONARIO COM ESTE CODIGO

    if (ret == 1)
    {
        cout << "\n\nDIGITE O CODIGO DO PROJETO: ";
        cin >> x.codigo;
        if (BuscaSequencial(x.codigo, p->prox->item.projetos, &j)) //PESQUISA/CONFERE SE JÁ EXISTE UM PROJETO COM ESTE CODIGO
        {
            cout << "\nCODIGO JÁ UTILIZADO\n\n";                    
            system("pause");
            system("cls");
        }
        else                                                        //SE NÃO TIVER ELE CADASTRA ESTE PROJETO
        { 
            cout << "\nNOME: ";
            cin >> x.nome;
            cout << "\nHORAS TRABALHADAS: ";
            cin >> x.horas;
            InsereSequencial(x, &(p->prox->item.projetos));
            cout << "\nPROJETO CADASTRADO COM EXITO !!!\n\n";
            system("pause");
            system("cls");
        }
    }
    else
    { 
        cout << "\nESTE CODIGO NÃO PERTENCE A NENHUM FUNCIONÁRIO\n\n";
        system("pause");
        system("cls");
    }
}

void ApagaFuncionario(TApontador x, TListaEncadeada *lista, TFuncionario *f)
{ 
    TApontador q;

    if ((VerificaListaEncadeadaVazia(*lista)) || (x == NULL) || (x->prox == NULL))  //VERIFICA SE A LISTA ESTA VAZIA 
    {
        cout << "LISTA VAZIA"; 
    }
    else                                                            //CASO ELA NÃO ESTEJA VAZIA, O CONTEUDO DO APONTADOR Q É DELETADO
    {
        q = x->prox;
        *f = q->item;
        x->prox = q->prox;
        if (x->prox == NULL)
        {
            lista->ultimo = x;
        }
        delete q;
    }
}

void ListaFuncionario(TListaEncadeada *lista)
{ 
    TApontador aux = lista->primeiro->prox;     //O APONTADOR APONTA PARA O INICIO DA LISTA

    system("cls");

    cout << "*******************************************\n";
    cout << "*        LISTAGEM DE FUNCIONÁRIOS         *\n";
    cout << "*******************************************\n\n";

    while (aux)                             //ENQUANTO AUX FOR DIFERENTE DE NULL
    { 
        cout << "\nCODIGO: " << aux->item.codfuncionario;
        cout << "\nNOME: " << aux->item.nomefuncionario;
        cout << "\nENDEREÇO: " << aux->item.endereco;
        cout << "\nDEPENDENTES: " << aux->item.dependentes << endl
             << endl;
        aux = aux->prox;                    //AUX RECEBE A PROXIMA POSIÇÃO DA LISTA
    }
    system("pause");
    system("cls");
}

void ConsultaFuncionario(TListaEncadeada lista)         
{ 
    TChave cod;
    TApontador p;

    system("cls");

    int ret;

    cout << "*******************************************\n";
    cout << "*        CONSULTA DE FUNCIONÁRIO          *\n";
    cout << "*******************************************\n\n";
    cout << "INFORME O CODIGO DO FUNCIONARIO: ";
    cin >> cod;

    ret = PesquisaLista(cod, lista, &p);        //FUNÇÃO PESQUISA RECEBE O CODIGO DIGITADO COMO PARAMETRO 

    if (ret == 1)                               //CASO O CODIGO SEJA ENCONTRADO
    {
        cout << "\nCODIGO: " << p->prox->item.codfuncionario;
        cout << "\nNOME: " << p->prox->item.nomefuncionario;
        cout << "\nENDEREÇO: " << p->prox->item.endereco;       //IMPRIME OS DADOS DO FUNCIONARIO
        cout << "\nDEPENDENTES: " << p->prox->item.dependentes << endl
             << endl;
        cout << "\nPROJETOS DESTE FUNCIONÁRIO:\n";

        ImprimeProjetos(p->prox->item.projetos);    //IMPRIME OS PROJETOS DO FUNCIONARIO

        system("pause");
        system("cls");
        cout << endl;
    }
    else
    {
        cout << "\nESTE CODIGO NÃO PERTENCE A NENHUM FUNCIONÁRIO\n\n";
        system("pause");
        system("cls");
    }
}

void ImprimeProjetos(TListaSequencial Lista)    //IMPRIME OS PROJETOS DO FUNCIONARIO
{ 
    int i;
    for (i = 0; i < Lista.ultimo; i++)
    {
        cout << "\n CODIGO:        " << Lista.item[i].codigo;       
        cout << "\n NOME:          " << Lista.item[i].nome;        
        cout << "\n HORAS TRABALHADAS:        " << Lista.item[i].horas << "\n"; 
    }
}

void ExcluirFuncSemProjetos(TListaEncadeada *lista)     //EXCLUI FUNCIONARIOS SEM PROJETOS 
{                     
    TApontador p, ant; 
    TChave cod;       
    int ret;           

    system("cls");

    cout << "*******************************************\n";
    cout << "*   EXCLUSÃO DE FUNCIONÁRIO  S/ PROJETO   *\n";
    cout << "*******************************************\n\n";
    cout << "DIGITE O CODIGO DO FUNCIONARIO: ";
    cin >> cod;
    ret = PesquisaLista(cod, *lista, &p);       //PESQUISA O CODIGO DIGITADO PELO FUNCIONARIO
    if (ret == 1)
    {
        if (p->prox->item.projetos.primeiro == p->prox->item.projetos.ultimo)       //VERIFICA SE A LISTA DE PROJETOS ESTA VAZIA
        { 
            ant = p;
            p = p->prox;
            ant->prox = p->prox;
            delete p; 
            cout << "\nFUNCIONARIO EXCLUIDO\n\n";       //CASO ESTEJA, O FUNCIONARIO É EXCLUIDO
            system("pause");
            system("cls");
        }
        else
        { 
            cout << "\nESTE FUNCIONARIO POSSUI PROJETOS !!!\n\n";
            system("pause");
            system("cls");
        }
    }
    else        //CASO O CODIGO NÃO PERTENÇA A NENHUM FUNCIONARIO
    { 
        cout << "\nO CODIGO NÃO PERTENCE A NENHUM CADASTRO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void ExcluirFuncionario(TListaEncadeada *lista)
{ 
    TFuncionario f;
    TApontador x = lista->primeiro;
    int cont = 0;

    while (x->prox != NULL)     //ENQUANTO A LISTA NÃO ACABAR OS FUNCIONARIOS SÃO APAGADOS
    {
       
        ApagaFuncionario(x, lista, &f); 
        cont++;             
    }

    system("cls"); 

    cout << "*******************************************\n";
    cout << "*        EXCLUSÃO DE FUNCIONÁRIOS         *\n";
    cout << "*******************************************\n\n";
    cout << "\n"
         << cont << " FUNCIONÁRIO EXCLUÍDO COM EXITO!\n\n";
    system("pause");
    system("cls");
}

void ExcluirProjeto(TListaEncadeada *lista)     //EXCLUI PROJETO
{                 
    TChave cod; 
    TApontador p; 
    TProjeto pj;
    int codExcluido, y, ret; 

    system("cls");

    cout << "*******************************************\n";
    cout << "*        EXCLUSÃO DE PROJETO              *\n";
    cout << "*******************************************\n\n";
    cout << "DIGITE O CODIGO DO FUNCIONARIO: ";
    cin >> cod;
    ret = PesquisaLista(cod, *lista, &p);       //PROCURA UM FUNCIONARIO COM O CODIGO DIGITADO 
    if (ret == 1)
    {
        p = p->prox;
        cout << "\nDIGITE O CODIGO DO PROJETO PARA SER EXCLUIDO: ";
        cin >> codExcluido;
        if (BuscaSequencial(codExcluido, p->item.projetos, &y))     //PROCURA UM PROJETO COM O CODIGO DIGITADO 
        {
            Remover(y, &(p->item.projetos), &pj);                   //CASO ENCONTRE O CODIGO, REMOVE O PROJETO

            cout << "\nPROJETO EXCLUIDO COM EXITO\n\n"; 
            system("pause");
            system("cls");
        }
        else
        { 
            cout << "\nCODIGO NÃO EXISTENTE\n\n";
            system("pause");
            system("cls");
        }
    }
    else
    { 
        cout << "\nO CODIGO QUE VC DIGITOU AINDA NÃO FOI CADASTRADO !!!\n\n";
        system("pause");
        system("cls");
    }
}

void Remover(int p, TListaSequencial *lista, TProjeto *pj)  //RECEBE OS PARAMETROS DA EXCLUIR PROJETO E O APAGA DIMINUINDO O TAMANHO DA LISTA (ULTIMO--)      
{
    *pj = lista->item[p];

    lista->ultimo--;
    for (int i = p; i < lista->ultimo; i++)
    {
        lista->item[i] = lista->item[i + 1];
    }
}

void ImprimeContraCheque(TListaEncadeada *lista)        //IMPRIME CONTRA CHEQUE DO FUNCIONARIO
{
    TApontador Aux = lista->primeiro->prox;
    int TotalHorasTrabalhadas = 0; 
    float SalarioBruto, SalarioLiquido, INSS, Imposto;

    system("cls");

    cout << "*******************************************\n";
    cout << "*         IMPRIMIR CONTRA-CHEQUE          *\n";
    cout << "*******************************************\n\n";

    while (Aux)     //ENQUANTO AUX FOR DIFERENTE DE NULL
    {
        cout << "\nCODIGO: " << Aux->item.codfuncionario;
        cout << "\nNOME: " << Aux->item.nomefuncionario;

        for (int i = 0; i < Aux->item.projetos.ultimo; i++)     //PERCORRE LISTA DE PROJETOS
        { 

            TotalHorasTrabalhadas = TotalHorasTrabalhadas + Aux->item.projetos.item[i].horas;   //CONTABILIZA AS HORAS TRABALHADAS
        }
        
        SalarioBruto = (TotalHorasTrabalhadas * 45) + (35 * Aux->item.dependentes);
        INSS = SalarioBruto * 0.085;            //CONTABILIZA O SALARIO
        Imposto = SalarioBruto * 0.15;
        SalarioLiquido = SalarioBruto - (INSS + Imposto);

        cout << "\nTOTAL DE HORAS TRABALHADAS SEMANALMENTE: " << TotalHorasTrabalhadas;                     
        cout << "\nSALARIO BRUTO SENDO DESCONTADO 8.5% DO INSS: " << SalarioBruto << ",00";         
        cout << "\nINSS: " << INSS;                                                                         
        cout << "\nIMPOSTO DE RENDA SENDO DESCONTADO 15% DE RENDA SOBRE SALARIO BRUTO: " << Imposto; 
        cout << "\nSALARIO LIQUIDO: " << SalarioLiquido << endl
             << endl; 

       
        SalarioBruto = 0;
        SalarioLiquido = 0;
        INSS = 0;                       //IGUALA AS VARIAVEIS A 0, E PASSA O PONTEIRO PARA O PROXIMO FUNCIONARIO
        TotalHorasTrabalhadas = 0;
        Imposto = 0;
        Aux = Aux->prox;
    }
    system("pause");
    system("cls");
}