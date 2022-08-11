#include <iostream>
#include <windows.h>
#include <time.h>
#define N 7

using namespace std;

    int maior(int vetor[N]){
        int maior = 0;

    for(int i = 0; i < N; i++){
        if(vetor[i] > maior){
            maior = vetor[i];

            return maior;
        }
    }

}

int main()
{
    setlocale (LC_ALL, "Portuguese");

    unsigned seed = time(0);
    srand(seed);
    int i;
    int vetor[N];

    cout << "Números aleatorios: ";

    for(i = 0; i < N; i++){
        vetor[i] = rand()% 101;

        cout << vetor[i] << " ";
    }

    cout << "\nMaior número: " << maior(vetor) << "\n\n";

    system ("pause");
    return 0;
}
