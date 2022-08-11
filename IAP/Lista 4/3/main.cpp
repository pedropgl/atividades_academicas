#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int A[5][5];
    //i = linha/ j = coluna
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            (i == j)? A[i][j] = 1: A[i][j] = 0;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << A[i][j];
        }
        cout << "\n";
    }

    cout << "\n\n";
    system("pause");
    return 0;
}
