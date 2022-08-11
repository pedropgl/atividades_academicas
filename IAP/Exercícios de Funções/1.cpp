#include <iostream>

using namespace std;

int RetornaMenor(int a, int b) {
    if (a < b){
        return a;
    }
    else {
        return b;
    }

}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i = 7, j = 7, z;

    if (i == j){
        cout << "Os números são iguais." <<endl;
    }

    else {

    z = RetornaMenor(i,j);
    cout <<z <<endl;
    }

    system("pause");
    return 0;
}
