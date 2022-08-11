#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int soma();

int main(){

    int SOMA;

    SOMA = soma();

    cout << SOMA;

    ofstream arqSaida;

    arqSaida.open("soma.dat");

    if (arqSaida.fail()){
        cerr << "Erro! Não foi possivel abrir o arquivo.\n";
        arqSaida.clear();
    }

    arqSaida << SOMA;

    arqSaida.close();

    return 0;
}

int soma(){
    int vetor[3];
    int resultado = 0;
    ifstream arqEntrada;
    arqEntrada.open("numeros.txt");

    for (int i = 0; i < 3; i++){
        arqEntrada >> vetor[i];
    }

    arqEntrada.close();

    for (int i = 0; i < 3; i++){
        resultado += vetor[i];
    }

    return resultado;
}
