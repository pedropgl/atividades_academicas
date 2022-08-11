#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //(a)
    int A[] = {1, 0, 5, -2, -5, 7};

    //(b)
    int soma;
    soma = A[0] + A[1] + A[5];
    cout << "A soma será: " << soma;

    //(c)
    A[4] = 100;

    //(d)
    cout << "\nVetor A: ";
    for(int i = 0; i < 6; i++){
        cout << A[i] << " ";
    }

    cout << "\n\n";

    system("pause");
    return 0;
}
