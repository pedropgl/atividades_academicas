#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;

void leitura();
 
int main(){

  leitura();

  cout << "\n\n";
  system("pause");
  return 0;
}

void leitura(){

    int numero;
    ifstream arqEntrada;
    arqEntrada.open("soma.txt");

    if(!arqEntrada.is_open()){
        cerr << "Erro! Não foi possivel abrir o arquivo.\n";
    }

    arqEntrada >> numero;
    cout << numero;

    arqEntrada.close();
}