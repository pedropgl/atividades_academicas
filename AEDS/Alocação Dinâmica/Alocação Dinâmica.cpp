#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void preenche(int v[], int);
int pesquisa(int v[],int , int);
void imprime(int v[],int, bool);
 
int main(){

UINT CPAGE_UTF8 = 65001;
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);

    int tam, num;
    int *vetor;
    bool encontrou = false;

    cout << "Digite o tamanho do vetor: "; 
    cin >> tam;

    vetor = new int (tam);

    preenche (vetor, tam);

    cout << "Digite o número que deseja procurar: ";
    cin >> num;
    cout << "\n\n";
  
    encontrou = pesquisa(vetor, tam, num);

    imprime(vetor, tam, encontrou);

    return 0;
}

void preenche(int vetor[], int tam){
    srand (time(NULL));
    for(int i=0; i<tam; i++){
        vetor[i] = rand () % 100;

    }
}

int pesquisa(int v[],int tam , int num){
   for (int i=0; i<tam ;i++){
       if(v[i] == num){
           return 1;
       }
    }
    return 0;
}

void imprime(int v[],int tam, bool encontrou){
    if(encontrou){
        cout << "Número encontrado no vetor\n\n";
    }
    else{ 
        cout << "Número não encontrado no vetor\n\n";
}
    for (int i = 0; i < tam ; i++){
    cout << v[i] << " ";
    }
}
