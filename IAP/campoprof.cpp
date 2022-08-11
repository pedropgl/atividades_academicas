#include <iostream>
#include <windows.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5

using namespace std;

void imprimeCampoMinado(char campo_minado[LINHA][COLUNA]) {
    cout << "Campo Minado: \n";
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            cout << campo_minado[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimeAuxiliar(char auxiliar[LINHA][COLUNA]) {
    cout << "Matriz Auxiliar: \n";
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            cout << auxiliar[i][j] << " ";
        }
        cout << endl;
    }
}

int compara(char auxiliar[LINHA][COLUNA], char campo_minado[LINHA][COLUNA], int nLinha, int nColuna) {
    // Compara se a posição da matriz campo_minado correspondente também possui um X
    if (auxiliar[nLinha][nColuna] == campo_minado[nLinha][nColuna]) {
        return 1; // campo limpo
    } else {
        // Atualiza a auxiliar para * na posição que o usuário informou, pois há uma mina
        auxiliar[nLinha][nColuna] = campo_minado[nLinha][nColuna];
        return 0; // mina
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char campo_minado[LINHA][COLUNA], auxiliar[LINHA][COLUNA]; // X para campo limpo; * para minas
    int minas=3; // Máximo de minas espalhadas pelo mapa
    int sorteio;
    int nLinha; // Linha informada pelo usuário
    int nColuna; // Coluna informada pelo usuário
    int acertos = 0; // Acertos do usuário
    bool igual;

    unsigned seed=time(0);
    srand(seed);

    // Inicializa Campo Minado
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            campo_minado[i][j] = 'X';
        }
    }

    // Inicializa Auxiliar
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            auxiliar[i][j] = ' ';
        }
    }

    // Sorteio das minas
    for (sorteio=1; sorteio<=minas; sorteio++) { // 1, 2, 3
        campo_minado[rand()%LINHA][rand()%COLUNA] = '*';
    }

    while (igual != 0 || acertos < 3) {
        system("cls");
        //imprimeCampoMinado(campo_minado);
        //cout << endl;
        imprimeAuxiliar(auxiliar);
        cout << "Acertos: " << acertos << endl;
        cout << "Informe a linha: ";
        cin >> nLinha;
        cout << "Informe a coluna: ";
        cin >> nColuna;
        auxiliar[nLinha][nColuna] = 'X';
        igual = compara(auxiliar, campo_minado, nLinha, nColuna); //1 campo limpo, 0 encontrou mina

        if (igual == 0) {
            cout << "Encontrou uma mina\n\n";
            cout << "     GAME OVER        \n\n";
            break;
        } else {
            cout << "Campo limpo.";
            acertos+=1;
        }
        if (acertos == 3) {
            cout << "\n\nParabéns, você ganhou!!!";
            break;
        }
    }
    Sleep(2000);
    system("cls");
    cout << "Gabarito: \n";
    imprimeAuxiliar(auxiliar);
    cout << endl;
    imprimeCampoMinado(campo_minado);
    return 0;
}
