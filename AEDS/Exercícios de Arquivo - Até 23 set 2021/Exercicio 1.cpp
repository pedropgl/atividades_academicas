#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int soma(int, int, int);
void escreve(int);

int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int resultado;
    resultado = soma(5, 7, 10);

    escreve(resultado);

    cout << endl
         << endl;
    system("pause");
    return 0;
}

int soma(int a, int b, int c){
    return a + b + c;
}

void escreve(int R){
    ofstream arqSaida;

    arqSaida.open("soma.txt");

    if (arqSaida.fail())
    {
        cerr << "Não foi possivel criar o arquivo.\n";
        arqSaida.clear();
    }

    arqSaida << R;

    arqSaida.close();
}