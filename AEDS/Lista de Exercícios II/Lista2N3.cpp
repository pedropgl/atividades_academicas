#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

#define MAXTAM 5

void CriaPilhaVetor(stack<int> p, int vetor[MAXTAM])
{

    for (int i = 0; i < MAXTAM; i++)
    {
        p.push(vetor[i]);
    }

    while (!p.empty())
    {
        cout << p.top() << "\n";
        p.pop();
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    stack<int> pilha;
    int vet[] = {1, 2, 3, 4, 5};

    CriaPilhaVetor(pilha, vet);

    cout << endl
         << endl;
    system("pause");
    return 0;
}