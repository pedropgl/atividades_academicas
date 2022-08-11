#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

void Imprime(stack<int> p)
{

    stack<int> aux;

    cout << "pilha normal: \n";
    while (!p.empty())
    {
        cout << p.top() << "\n";
        aux.push(p.top());
        p.pop();
    }

    cout << "\n\n Pilha Invertida: \n";
    while (!aux.empty())
    {
        cout << aux.top() << "\n";
        aux.pop();
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    stack<int> pilha;

    pilha.push(7);
    pilha.push(5);
    pilha.push(3);
    pilha.push(1);
    pilha.push(9);

    Imprime(pilha);

    cout << endl
         << endl;
    system("pause");
    return 0;
}