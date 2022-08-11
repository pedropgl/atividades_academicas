#include <iostream>
#include <math.h>

using namespace std;

float calculaDistancia(float, float, float, float);

int main()
{
    setlocale(LC_ALL, "portuguese");
    float x1, x2, y1, y2, distancia;

    cout <<"Digite as coordenadas do ponto 1: ";
    cin >>x1 >>y1;
    cout <<"Digite as coordenadas do ponto 2: ";
    cin >>x2 >>y2;

    system("cls");

    distancia = calculaDistancia(x1,y1,x2,y2);
    cout <<"A distancia entre os pontos 1 e 2 é: " <<distancia <<endl;

    system("pause");
    return 0;
}

float calculaDistancia(float x1, float x2, float y1, float y2){
    float a, b, c, d;
    a = x2 - x1;
    b = y2 - y1;
    c = a*a + b*b;
    d = sqrt(c);

    return d;
}
