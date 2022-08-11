#include <iostream>
#include <windows.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5

using namespace std;

void DesenhaCampoMinado(char campo_minado[LINHA][COLUNA]) {
    cout << "Campo Minado: \n";
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            cout << campo_minado[i][j] << " ";
        }
        cout << "\n";
    }
}

void DesenhaAuxiliar(char auxiliar[LINHA][COLUNA]) {
    cout << "Matriz Auxiliar: \n";
    for (int i=0; i<LINHA; i++) {
        for (int j=0; j<COLUNA; j++) {
            cout << auxiliar[i][j] << " ";
        }
        cout << "\n";
    }
}

int compara(char auxiliar[LINHA][COLUNA], char campo_minado[LINHA][COLUNA], int nLinha, int nColuna) {
    if (auxiliar[nLinha][nColuna] == campo_minado[nLinha][nColuna]) {
        return 1;
    } else {
        auxiliar[nLinha][nColuna] = campo_minado[nLinha][nColuna];
        return 0;
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int resposta;
    int dificuldade;
    string nome;

    char campo_minado[LINHA][COLUNA], auxiliar[LINHA][COLUNA];
    int minas = 0;
    int acertos = 0;
    int sorteio;
    int nLinha;
    int nColuna;
    int igual;


    do{

    cout << " +--- MENU PRINCIPAL ---+ \n";
    cout << " |(1) Novo jogo         |\n"; //Vai iniciar um novo game
    cout << " |(2) Sobre o jogo      |\n"; //Dara uma breve explicação de como o jogo funciona
    cout << " |(3) Sobre mim         |\n"; //Informaçoes basicas sobre mim
    cout << " |(4) Sair              |\n"; //Apenas vai sair do programa
    cout << " +----------------------+\n";

    cout << "\nDigite sua opçao: ";
    cin >> resposta;

        switch(resposta) {
            case 1:
                system("cls");

                cout << "---Seja bem vindo ao campo minado---\n";
                cout << "Digite seu nome: ";
                cin >> nome;

                system("cls");

                cout << nome << ", em qual dificuldade deseja jogar?\n";
                cout << " +-------------------------------+\n";
                cout << " |(1) Fácil          até 3 minas |\n"; //3 minas
                cout << " |(2) Intermediário  até 6 minas |\n"; //6 minas
                cout << " |(3) Difícil        até 9 minas |\n"; //9 minas
                cout << " +-------------------------------+\n";
                cout << "\nDigite sua opção: ";
                cin >> dificuldade;

                if(dificuldade == 1){
                    minas = 3;
                    for (sorteio = 1; sorteio <= minas; sorteio++) {
                                campo_minado[rand()%LINHA][rand()%COLUNA] = '*';
                    }
                }
                if(dificuldade == 2){
                    minas = 6;
                    for (sorteio = 1; sorteio <= minas; sorteio++) {
                                campo_minado[rand()%LINHA][rand()%COLUNA] = '*';
                    }
                }
                if(dificuldade == 3){
                    minas = 9;
                    for (sorteio = 1; sorteio <= minas; sorteio++) {
                                campo_minado[rand()%LINHA][rand()%COLUNA] = '*';
                    }
                }
                for (int i=0; i<LINHA; i++) {
                    for (int j=0; j<COLUNA; j++) {
                        campo_minado[i][j] = '~';   //Quando a casa estiver limpa será colocado um "~" no campo
                    }
                }


                for (int i=0; i<LINHA; i++) {
                    for (int j=0; j<COLUNA; j++) {
                        auxiliar[i][j] = ' ';       //Esse "for" será responsavel por iniciar o campo auxiliar
                    }
                }

                for (sorteio = 1; sorteio <= minas; sorteio++) {    //Esse "for" vai ser o reponsavel por sortear o local onde as minas vão ficar
                campo_minado[rand()%LINHA][rand()%COLUNA] = '*';
        }


                while (igual != 0 || acertos < 3) {
                    system("cls");

                    //DesenhaCampoMinado(campo_minado);

                    DesenhaAuxiliar(auxiliar);
                    cout << "Jogadas corretas: " << acertos << "\n";
                    cout << "Informe uma linha: ";
                    cin >> nLinha;
                    cout << "Informe uma coluna: ";
                    cin >> nColuna;
                    auxiliar[nLinha][nColuna] = '~';
                    igual = compara(auxiliar, campo_minado, nLinha, nColuna); //Aqui vamos validar se a casa jogada havia ou não uma bomba

                    if (igual == 0) {                       //Caso o igual for igual a 0 quer dizer que você pisou em uma bomba, caso contrario o jogo continua
                        cout << "Encontrou uma mina\n\n";
                        cout << "+-----------+\n";
                        cout << "| GAME OVER |\n";
                        cout << "+-----------+\n";

                        break;
                    } else {
                        system("cls");
                        cout << "Campo limpo.";
                        acertos += 1;
                    }
                    if (acertos == 3) {                     //Caso o jogador consiga fazer 3 jogdas corretas ele ganha o jogo
                        cout << "\n+---------------+\n";
                        cout << "|  VOCÊ GANHOU  |\n";
                        cout << "+---------------+\n";
                        break;
                    }
                }

            break;

            case 2:
                system("cls");
                cout << "Campo minado é um popular jogo de computador para um jogador,\n";
                cout << "Que foi inventado por Robert Donner em 1989 e tem como objetivo\n";
                cout << "revelar um campo de minas sem que alguma seja detonada. \n";
                break;

            case 3:
                system ("cls");
                cout << "Meu nome é Pedro Paulo tenho 19 anos e sou estudante da turma SI211 do IFMG.\n\n";
                break;

            case 4:
                system("cls");
                cout << "\n+-------------------------+\n";
                cout << "| Obrigado, volte sempre  |\n";
                cout << "+-------------------------+\n";
                break;

            default:
                cout << "Opção invalida.\n\n";
                system("pause");
                system("cls");

        }

    } while(resposta < 1 || resposta > 4);

    system("pause");
    return 0;
}

