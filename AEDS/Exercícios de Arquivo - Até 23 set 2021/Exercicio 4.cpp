#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;
 
int main() {
    ofstream arqSaida;
    arqSaida.open("sizeOf.txt");

    if (arqSaida.fail()){
        cerr << "Erro! Não foi possivel abrir o arquivo.\n";
        arqSaida.clear();
    }

    arqSaida << "--- TIPO --- | --- BYTES ---" << "\n";
    arqSaida << "char ........: " << "  " <<  sizeof(char) << " bytes" <<"\n";
    arqSaida << "int .........: " << "  " <<  sizeof(int) << " bytes" << "\n";
    arqSaida << "short .......: " << "  " << sizeof(short) << " bytes" << "\n";
    arqSaida << "long ........: " << "  " <<  sizeof(long) << " bytes" << "\n";
    arqSaida << "float .......: " << "  " <<  sizeof(float) << " bytes" << "\n";
    arqSaida << "double ......: " << "  " <<  sizeof(double) << " bytes" << "\n";
    arqSaida << "long double  : " << "  " << sizeof(long double) << " bytes" << "\n";

    arqSaida.close();
}