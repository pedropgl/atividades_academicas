#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, fat = 1, i;

    cout << "Digite o número desejado: ";
    cin >> n;

    if(n == 0){
        cout << "Fatorial de 0 igual a 1." << endl;
    }

    else{
        for(int i = 1; i <= n; i++){
        fat = fat * i;
        }

        system("cls");

        cout << "Fatorial de " << n <<endl;
        cout << n << "! = " << fat << endl;
    }

 system("Pause");
        return 0;
}


