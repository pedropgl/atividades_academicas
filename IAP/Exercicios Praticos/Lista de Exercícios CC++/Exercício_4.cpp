#include <iostream>
#include <cmath>

using namespace std;


int main(){

    setlocale(LC_ALL, "Portuguese");

    int ca = 0, cb = 0, hip = 0;

    cout << "Digite o valor do cateto A: ";
    cin >> ca;

    cout << "Digite o valor do cateto B: ";
    cin >> cb;

    hip = (ca * ca) + (cb * cb);

    cout << "O valor da hipotenusa é: " << sqrt(hip) << endl;

    system("pause");
    return 0;
}
