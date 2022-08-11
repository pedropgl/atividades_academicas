#include <iostream>
#include <windows.h>
#include <stack>

using namespace std;

#define MAXTAM 15

void PreenchePilha(stack<int> p, int vet[MAXTAM])
{

    for (int i = 0; i < MAXTAM; i++)
    {

        if ((vet[i] % 2) == 0)
        {
            p.push(vet[i]);
        }
        else
        {
            p.pop();
        }
    }

    cout << "PILHA : \n";
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
    int vet[]{2, 4, 12, 5, 8, 7, 11, 8, 4, 1, 0, 2, 8, 8, 1};

    PreenchePilha(pilha, vet);

    cout << endl
         << endl;
    system("pause");
    return 0;
}