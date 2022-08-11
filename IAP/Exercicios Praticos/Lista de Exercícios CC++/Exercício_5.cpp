#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b , c, delta, x = 0, xx = 0;

    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << "Digite o valor de C: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);

    system("cls");

    if(delta < 0){
        cout << "Delta: " << delta << " não tem raizes reais!";
    }

    if(delta == 0){
        x = (-b + sqrt(delta))/(2 * a);
        xx = (-b - sqrt(delta))/(2 * a);
        cout << "x' = " << x << endl;
        cout << a << "x . x + " << b << "x + " << c << " = 0";
    }
    if(delta > 0){
        x = (-b + sqrt(delta))/(2 * a);
        xx = (-b - sqrt(delta))/(2 * a);
        cout << "x1 = " << x;
        cout << "\nx2 = " << xx << endl;
        cout << a << "x . x + " << b << "x + " << c << " = 0";
    }
    if(a == 0){
        system("cls");
        cout << "O valor da hipotenusa não pode ser igual a 0\n";
    }

    cout << "\n\n";

    system("pause");
    return 0;
}
