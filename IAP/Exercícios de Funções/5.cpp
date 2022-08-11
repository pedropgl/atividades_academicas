#include <iostream>
#include <windows.h>
using namespace std;

int testenum(int num){
    if(num > 0){
        return 1;
    }else if(num < 0){
        return -1;
    }else
        return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    cout << "Digite um número: " << endl;
    cin >> n;
    cout << testenum(n);

    return 0;
}
