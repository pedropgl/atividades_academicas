#include <iostream>

using namespace std;

float media(float n1, float n2, float n3, char letra){

    float mediaA, mediaH, mediaP;

    if(letra == 'a'){  // M�dia aritim�tica
            mediaA = (n1 + n2 + n3)/3;
            return mediaA;
    }

    if(letra == 'p'){   //M�dia Ponderada
            mediaP = (n1*4 + n2*3 + n3*2)/9;
            return mediaP;
    }

    if(letra == 'h'){   // M�dia Harm�nica
            mediaH = 3/(1/n1+1/n2+1/n3);
            return mediaH;
    }
}


int main()
{
    float n1, n2, n3;
    char letra;
    setlocale (LC_ALL, "Portuguese");

    cout << "Digite sua primeira nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    cout << "Digite sua terceira nota: ";
    cin >> n3;
    cout << "\nDigite o tipo da m�dia(a/p/h): ";
    cin >> letra;

    system("cls");

    if(letra == 'a'){
    cout << "\nSua m�dia Aritim�tica foi: " << media(n1,n1,n2,letra) << "\n\n";
    }

    if(letra == 'p'){
    cout << "\nSua m�dia Ponderada foi: " << media(n1,n1,n2,letra) << "\n\n";
    }

    if(letra == 'h'){
    cout << "\nSua m�dia Harm�nica foi: " << media(n1,n1,n2,letra) << "\n\n";
    }

    system("pause");
    return 0;
}
