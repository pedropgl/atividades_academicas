#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float tamanho, primeiro, razao, termos, soma, an;

    cout << "Qual ser� o tamanho da PA: ";
    cin >> tamanho;


    cout << "Qual ser� o primeiro n�mero da PA: ";
    cin >> primeiro;

    cout << "Qual ser� a raz�o da PA: ";
    cin >> razao;

    system("cls");

    for (int i = 1;i <= tamanho; i++) {
      termos = primeiro + (i - 1) * razao;
      cout << "["<< termos << "] ";
      soma = (primeiro + termos) * i / 2;
     }

    cout << "\n\nA Soma do n�meros da PA ser�: " << soma << "\n\n";

    system ("pause");
    return 0;
}


