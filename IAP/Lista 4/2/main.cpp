#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float A[5], B[5];

    for(int i = 0; i < 5; i++){
        cout << "Insira um número: ";
        cin >> A[i];
        B[i] = A[i] * A[i];
    }

    system("cls");

    cout << "Vetor A: ";
    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }

    cout << "\n";

    cout << "Vetor B: ";
    for(int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }

    cout << "\n\n";
    system("pause");
    return 0;
}
