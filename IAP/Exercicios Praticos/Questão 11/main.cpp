#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int res;
    float kmGAS, kmET, custo, dist;
    #define gasolina 5.69;
    #define etanol 4.35;

    cout << "Informe quantos quil�metros por litro seu carro faz com gasolina: ";
    cin >> kmGAS;

    cout << "Informe quantos quil�metros por litro seu carro faz com gasolina: ";
    cin >> kmET;

    cout << "Qual ser� a dist�ncia a ser percorrida: ";
    cin >> dist;

    system("cls");

    cout << "Voc� ir� abastecer com gasolina (1) ou etanol (2)?: ";
    cin >> res;

    if (res == 1){
        custo = (dist / kmGAS) * gasolina
        cout << "O custo estimado da viagem ser� de " << custo << " reais utilizando gasolina.\n";
    }

    else {
        custo = (dist / kmGAS) * etanol
        cout << "O custo estimado da viagem ser� de " << custo << " reais utilizando etanol.\n";
    }

    system("pause");
    return 0;
}
