#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tamanho, primeiro, razao, termos, soma, an;

    cout << "Qual será o tamanho da PA: ";
    cin >> tamanho;


    cout << "Qual será o primeiro número da PA: ";
    cin >> primeiro;

    cout << "Qual será a razão da PA: ";
    cin >> razao;

    system("cls");

    for (int i = 1;i <= tamanho; i++) {
      termos = primeiro + (i - 1) * razao;
      cout << "["<< termos << "] ";
      soma = (primeiro + termos) * i / 2;
     }

    cout << "\n\nA Soma do números da PA será: " << soma << "\n\n";

    system ("pause");
    return 0;
}


