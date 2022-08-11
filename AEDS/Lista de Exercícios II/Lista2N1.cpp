#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

int RetornaMaior(stack<int> p)
{

    int maior = 0;
    while (!p.empty())
    {

        if (p.top() > maior)
        {
            maior = p.top();
        }

        p.pop();
    }
    return maior;
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    stack<int> pilha;
    int retorno;

    pilha.push(7);
    pilha.push(5);
    pilha.push(3);
    pilha.push(159);
    pilha.push(797);

    retorno = RetornaMaior(pilha);
    cout << retorno;

    cout << endl
         << endl;
    system("pause");
    return 0;
}