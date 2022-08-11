#ifndef TP_H
#define TP_H

#define MAXTAM 5 //TAMANHO MAXIMO DE PROJETOS
#define INICIO 0 //INICIO DA LISTA SEQUENCIAL

typedef int TChave;

typedef struct TCelula_str *TApontador;

typedef struct
{
    TChave codigo;
    char nome[30]; //STRUCT DOS PROJETOS
    int horas;
} TProjeto;

typedef struct
{
    TProjeto item[MAXTAM];
    int primeiro; //LISTA SEQUENCIAL PARA ARMAZENAR OS PROJETOS
    int ultimo;
} TListaSequencial;

typedef struct
{
    TChave codfuncionario;
    char nomefuncionario[40];
    char endereco[40]; //STRUCT DO FUNCIONARIO
    int dependentes;
    TListaSequencial projetos;
} TFuncionario;

typedef struct TCelula_str
{
    TFuncionario item; //CELULA CABEÇA DA LISTA ENCADEADA
    TApontador prox;
} TCelula;

typedef struct
{
    TApontador primeiro; //PONTEIROS PARA A PRIMEIRA E ULTIMA POSICAO DA LISTA ENCADEADA
    TApontador ultimo;
} TListaEncadeada;

void menu();
void ExcluirProjeto(TListaEncadeada *lista);
void CadastraProjeto(TListaEncadeada *lista);
void ImprimeProjetos(TListaSequencial Lista);
void ConsultaFuncionario(TListaEncadeada lista);
void ExcluirFuncionario(TListaEncadeada *lista);
void ImprimeContraCheque(TListaEncadeada *lista);
void CadastraFuncionario(TListaEncadeada *lista);
void ExcluirFuncSemProjetos(TListaEncadeada *lista);
void CriaListaEncadeadaVazia(TListaEncadeada *lista);
int VerificaListaEncadeadaVazia(TListaEncadeada lista);
void CriaListaSequencialVazia(TListaSequencial *Lista);
int VerificaListaSequencialVazia(TListaSequencial lista);
void InsereSequencial(TProjeto x, TListaSequencial *lista);
void Remover(int p, TListaSequencial *lista, TProjeto *pj);
void InsereEncadeada(TFuncionario f, TListaEncadeada *lista);
int BuscaSequencial(int cod, TListaSequencial lista, int *p);
int PesquisaLista(TChave cod, TListaEncadeada lista, TApontador *p);

#endif