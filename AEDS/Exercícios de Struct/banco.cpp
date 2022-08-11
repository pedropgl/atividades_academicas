#include <iostream>
#include <windows.h>
 
using namespace std;

struct BANCO{
        int num;
        char titular[20];
        float saldo;
        bool maior = false;
        bool menor = false;
};

float maioor(BANCO[]);
float menoor(BANCO[]);
    
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    BANCO contas[5];

    int menor, maior;

    for (int i = 0; i < 5; i++){
        cout << "Número da conta: ";
        cin >> contas[i].num;
        cout << "Titular: ";
        cin >> contas[i].titular;
        cout << "Saldo: ";
        cin >> contas[i].saldo;

        system("cls");
    }

    menor =  menoor(contas);
    maior = maioor(contas);

    for (int i = 0; i < 5; i++){
        if (contas[i].saldo == menor){
            contas[i].menor = true;
        }
        if (contas[i].saldo == maior){
            contas[i].maior = true;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (contas[i].menor == true)
        {
            cout << "\nConta(s) com o(s) menor(es) saldo(s).\n";
            cout << "\nNúmero " << contas[i].num;
            cout << "\nTitular " << contas[i].titular;
            cout << "\nSaldo " << contas[i].saldo << "\n\n";
        }
        if (contas[i].maior == true)
        {
            cout << "\nConta(s) com o(s) maior(es) saldo(s).\n";
            cout << "\nNúmero " << contas[i].num;
            cout << "\nTitular " << contas[i].titular;
            cout << "\nSaldo " << contas[i].saldo;
        }
    }

    cout << "\n\n";
    system("pause");
    return 0;
}

float maioor(struct BANCO contas[5]){
    float maior;
        for (int i = 0; i < 5; i++){
            if(i==0){
                maior = contas[i].saldo;
            }
            else if (contas[i].saldo > maior){
                maior = contas[i].saldo;
            }
        cout << "\n\n";
        }
    return maior;
}   

float menoor(struct BANCO contas[5]){
    float menor;
        for (int i = 0; i < 5; i++){
            if(i==0){
                menor = contas[i].saldo;
            }
            else if (contas[i].saldo < menor){
                menor = contas[i].saldo;
            }
        cout << "\n\n";
        }
    return menor;
}   