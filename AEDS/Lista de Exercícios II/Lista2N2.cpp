#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

int RetornaIgual(stack<int> p, stack<int> p2)
{

    stack<int> aux;

    while (!p.empty())
    {

        if (p.top() == p2.top())
        {

            p.pop();
            p2.pop();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    stack<int> pilha;
    stack<int> pilha2;
    int retorno;

    pilha.push(7);
    pilha2.push(7);

    pilha.push(7);
    pilha2.push(7);

    pilha.push(5);
    pilha2.push(5);

    pilha.push(1);
    pilha2.push(1);

    retorno = RetornaIgual(pilha, pilha2);
    cout << retorno;

    cout << endl
         << endl;
    system("pause");
    return 0;
}