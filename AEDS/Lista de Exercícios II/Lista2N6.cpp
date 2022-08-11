#include <iostream>
#include <windows.h>
#include <stack>

#define MAXTAM 10

using namespace std;

void PreenchePilha(stack<int> p, stack<int> n, int vet[MAXTAM])
{

    for (int i = 0; i < MAXTAM; i++)
    {
        if (vet[i] > 0)
        {
            p.push(vet[i]);
        }
        else
        {
            n.push(vet[i]);
        }
    }

    cout << "PILHA P: \n";
    while (!p.empty())
    {
        cout << p.top() << "\n";
        p.pop();
    }

    cout << "PILHA N: \n";
    while (!n.empty())
    {
        cout << n.top() << "\n";
        n.pop();
    }
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    stack<int> P;
    stack<int> N;
    int vet[] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};

    PreenchePilha(P, N, vet);

    cout << endl
         << endl;
    system("pause");
    return 0;
}