#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float lado, p = 1;

    cout << "Digite quantos centÝmetros tem a barra de chocolate: ";
    cin >> lado;

    while(lado >= 2){
        p *= 4;
        lado /= 2;
    }

    system("cls");

    cout << "No final teremos " << p << " pedašos.\n\n";

    system("pause");
    return 0;
}
