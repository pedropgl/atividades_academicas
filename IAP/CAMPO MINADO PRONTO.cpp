#include <iostream>
#include <time.h> // permite estabelecer um tempo
#include <windows.h> // garante a aleatoriedade das minas
#include <conio.h> // Permite o uso da fun��o getch(captura um caractere da entrada e retorna) dentro da fun��o dificuldade()
using namespace std;

        // Fun��es utilizadas para rodar toda a estrutura do jogo.
int dificuldade(int);
void imprimiCampo(char);
void imprimeCampoMinado();
void novoJogo();
void sobreJogo();
void sobreMim();
void menu();
// a main vai ler todos os menus e permitir� que o jogo seja rodado
int main()
{
    // coloca toda a linguagem em portugu�s-PTBR
    setlocale(LC_ALL,"Portuguese");

    menu();

    return 0;
}
        //vari�veis utilizadas no programa
        int dificuldade(int nvl) {
        int minas;
        int escolha;
        if(nvl == 1){
        cout << endl;
        cout << " N�VEL INICIANTE: " << endl << endl;
        cout << " Nesse primeiro n�vel voc� vai se familiarizando com o jogo, teremos 4 minas espalhadas no campo!" << endl;
        cout << " Boa sorte!";

        cout << "\n\nDeseja escolher outro n�vel[1] ou continuar[2]? " << endl;
        cin >> escolha;
        system ("cls");

                    // condicional que permite com que o usu�rio escolha continuar ou escolher outra op��o
        if (escolha == 1) {
            cout << endl;
            cout << " Retornaremos ao menu de sele��o em um instante" << endl;
            Sleep(700);
            system("cls");
            novoJogo();
        } else if (escolha == 2){
            cout << endl;
            cout << "Entraremos no mapa do jogo em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);

        }
        // de qualquer forma o usu�rio teria que apertar enter para continuar, aqui s� deixamos claro a ele
        cout << endl << endl;
        cout << "[APERTE ENTER PARA CONTINUAR] " << endl;
        getch();

        } else {
            cout << "Op��o inv�lida!!!" << endl;
            cout << "Retornaremos ao menu de sele��o em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);
            system("cls");
            novoJogo();
        }
    }
         minas = 4;
            return minas;
    }
        else if(nvl == 2){
            cout << endl;
            cout << "N�VEL F�CIL: ";
            cout << "Bom, j� que n�o � sua primeira vez aqui, n�o vamos facilitar pra voc�" << endl;
            cout << "mas, nem por isso vamos dificultar tamb�m." << endl;
            cout << "Teremos 6 minas espalhadas pelo mapa. Boa sorte." << endl;

            cout << "\n\nDeseja escolher outro n�vel[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << endl;
            cout << "Retornaremos ao menu de sele��o em um instante" << endl;
            Sleep(700);
            system("cls");
            novoJogo();
        } else if (escolha == 2){
            cout << endl;
            cout << "Entraremos no mapa do jogo em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);
        }

        cout << endl << endl;
        cout << "[APERTE ENTER PARA CONTINUAR] " << endl;
        getch();

        } else {
            cout << "Op��o inv�lida!!!" << endl;
            cout << "Retornaremos ao menu de sele��o em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);
            system("cls");
            novoJogo();
            }
        }
            minas = 6;
                return minas;
        }
            else if(nvl == 3) {
                cout << endl;
                cout << "N�VEL INTERMEDI�RIO: ";
                cout << endl;
                cout << "As coisas est�o come�ando a ficarem complicadas, mas sei que voc� � capaz!" << endl;
                cout << "Teremos 14 minas espalhadas pelo mapa. Boa sorte" << endl;

                cout << "\n\nDeseja escolher outro n�vel[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << "Retornaremos ao menu de sele��o em um instante" << endl;
            Sleep(700);
            system("cls");
            novoJogo();
        } else if (escolha == 2){
            cout << endl;
            cout << "Entraremos no mapa do jogo em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);
        }

        cout << endl << endl;
        cout << "[APERTE ENTER PARA CONTINUAR] " << endl;
        getch();

        } else {
            cout << "Op��o inv�lida!!!" << endl;
            cout << "Retornaremos ao menu de sele��o em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);
            system("cls");
            novoJogo();
            }
        }
                minas = 14;
                    return minas;
            } else {
                    cout << endl;
                    cout << "N�VEL DIF�CIL: ";
                    cout << endl;
                    cout << "Temos algu�m realmente ousado aqui, e n�o sou. Chegamos ao �ltimo n�vel" << endl;
                    cout << "Sei que � capaz de conseguir, teremos 17 minas espalhadas pelo mapa. Boa sorte!!";

                    cout << "\n\nDeseja escolher outro n�vel[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << "Retornaremos ao menu de sele��o em um instante" << endl;
            Sleep(500);
            system("cls");
            novoJogo();
        } else if (escolha == 2){
            cout << endl;
            cout << "Entraremos no mapa do jogo em um instante";
            for (int i=0; i<7; i++) {
            Sleep(200);
        }
        cout << endl << endl;
        cout << "[APERTE ENTER PARA CONTINUAR] " << endl;
        getch();

        } else {
            cout << "Op��o inv�lida!!!" << endl;
            cout << "Retornaremos ao menu de sele��o em um instante";
            for (int i=0; i<7; i++) {
            Sleep(200);
            system("cls");
            novoJogo();
            }
        }
                    minas = 17;
                        return minas;
                }

}
        // Imprimi o campo minado jog�vel onde ser� atualizados a cada escolha do usu�rio
void imprimiCampo(char cAuxiliar[5][5]) {

    cout << "                 Colunas     \n";
    cout << "            0   1   2   3   4 \n";
    cout << "Linha 0 ->  " << cAuxiliar[0][0] << " | " << cAuxiliar[0][1] << " | " << cAuxiliar[0][2] << " | " << cAuxiliar[0][3] << " | " << cAuxiliar[0][4] << " \n";
    cout << "           ---+---+---+---+---\n";
    cout << "Linha 1 ->  " << cAuxiliar[1][0] << " | " << cAuxiliar[1][1] << " | " << cAuxiliar[1][2] << " | " << cAuxiliar[1][3] << " | " << cAuxiliar[1][4] << " \n";
    cout << "           ---+---+---+---+---\n";
    cout << "Linha 2 ->  " << cAuxiliar[2][0] << " | " << cAuxiliar[2][1] << " | " << cAuxiliar[2][2] << " | " << cAuxiliar[2][3] << " | " << cAuxiliar[2][4] << " \n";
    cout << "           ---+---+---+---+---\n";
    cout << "Linha 3 ->  " << cAuxiliar[3][0] << " | " << cAuxiliar[3][1] << " | " << cAuxiliar[3][2] << " | " << cAuxiliar[3][3] << " | " << cAuxiliar[3][4] << " \n";
    cout << "           ---+---+---+---+---\n";
    cout << "Linha 4 ->  " << cAuxiliar[4][0] << " | " << cAuxiliar[4][1] << " | " << cAuxiliar[4][2] << " | " << cAuxiliar[4][3] << " | " << cAuxiliar[4][4] << " \n";

}
        // Roda todo o jogo depois de escollhida a primeira op��o do menu principal
void novoJogo(){

    srand(time(NULL));

    int campominado[5][5];
    char cAuxiliar[5][5];
    char escolha;
    int linha, coluna, i, j, marcador = 0, nvl, minas, jogada;
    string nome;
            // Menu da escolha de dificuldade
    cout << "Informe seu nome para que possamos continuar: " << endl;
    cin >> nome;
    cout << "Prontinho " << nome << " chegamos a uma parte importante do jogo." << endl;
    cout << "Escolha o n�vel de dificuldade em que pretende jogar, por�m escolha com cautela hihihih" << endl << endl;
        cout << "1. Iniciante" << endl;
        cout << "2. F�cil" << endl;
        cout << "3. Intermedi�rio" << endl;
        cout << "4. Dif�cil" << endl;
    cout << "Informe a op��o desejada: ";
    cin >> nvl;
     do{
        cout << "Dificuldade: " << nvl << endl;
    }while(nvl <1 || nvl > 4);

            // Vari�vel "minas" ir� armazenar a quantidade de minas conforme a dificuldade escolhida.
    minas = dificuldade(nvl);

    for(i = 0; i < 5 ; i++) { // La�o feito para gerar um campo vazio
        for(j = 0 ; j < 5 ; j++)
            campominado[i][j] = 0;
    }

    for(i = 0; i < 5 ; i++) { // mostra os espa�os em branco na matriz
        for(j = 0 ; j < 5 ; j++)
            cAuxiliar[i][j] = ' ';
    }

  for( linha = 0 ; linha < minas ; linha++) {   // isso garante a randomiza��o das minas no mapa.
        campominado[rand()%5][rand()%5] = 1 ;

    system("cls");
    imprimiCampo(cAuxiliar); // Aqui ser� onde o campo ir� ser imprimido na tela pela primeira vez

  }
    for(jogada = 1 ; jogada < 4 ; jogada++){ // como a matriz e 5 por 5, indo de 0,1,2,3,4, por isso jogadas s�o menores que 4
        do{ // usado para n�o contabilizar jogada inv�lida
            cout << endl << endl;
            cout << "Informe a linha que voce quer jogar: " << endl;
            cin >> linha;
            cout << "Informe a coluna que voce quer jogar: " << endl;
            cin >> coluna;
            system("cls");
            imprimiCampo(cAuxiliar); // O campo minado ser� atualizado e mostra na tela a posi��o marcada.

        }while((linha < 0 || linha > 4) || ( coluna < 0 || coluna > 4));

        if(campominado[linha][coluna] == 1){ // aqui ocorre se o usu�rio marcar espa�o com mina, ai o jogo acaba
            marcador=1;
            system("cls");


cout << "\n\n                          VOC� PISOU NA MINA!!!                                       " << endl << endl;
cout << "\n\n                              FIM DE JOGO                                             " << endl << endl;



            cout << "\n\nDeseja voltar ao menu inicial ?(s/n) " << endl;
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') { // Condicional "if" feita para o caso o usu�rio deseje voltar ao menu ou finalizar o programa.
                cout << "Retornaremos ao menu principal em um instante" << endl;
                Sleep(500);
                system("cls");
                menu();
            } else {
                cout << endl << endl;
                cout << "Programa finalizando" << endl;
                Sleep(500);
                system("pause");
    }

        }
         else{
         cAuxiliar[linha][coluna]= 'X';// condi��o se marcar um espa�o sem mina, vai aparecer o X no tabuleiro
            system("cls");
                imprimiCampo(cAuxiliar);
        }
    }
    if(marcador==0) { // condi��o que marca como vencedor o usu�rios que conseguiu n�o pisar nas minas
        system("cls");
        cout << "Voc� n�o pisou em nenhuma bomba espalhada pelo mapa! \n" << endl << endl;
        cout << "          Parab�ns,  You are is champion!             " << endl << endl;

        cout << "\n\nDeseja voltar ao menu inicial ?(s/n) " << endl;
        cin >> escolha;

        if (escolha == 's' || escolha == 'S') {
            cout << endl;
            cout << "Retornaremos ao menu principal em um instante" << endl;
            Sleep(500);
            system("cls");
            menu();
        } else {
            cout << endl;
            cout << "Programa finalizando" << endl;
            Sleep(500);
            system("pause");
    }
    }
}


        // Fun��o criada para imprimir na tela detalhes sobre o jogo e como ele funciona
void sobreJogo() {
    char escolha;
    system("cls");

    cout << "Campo minado � um popular jogo de computador para um jogador." << endl;
    cout << "Foi inventado por Robert Donner em 1989 e tem como objetivo revelar um campo de minas sem que alguma seja detonada." << endl;
    cout << endl << endl;
    cout << "Deseja voltar ao menu inicial?(s/n) " << endl;
    cin >> escolha;

    if (escolha == 's' || escolha == 'S') {
        cout << endl;
        cout << "Retornaremos ao menu principal em um instante" << endl;
        Sleep(500);
        system("cls");
        menu();
    } else {
        cout << endl;
        cout << "Programa finalizando" << endl;
        Sleep(500);
        system("pause");
    }
}
        // Mostra sobre o desenvolvedor do programa
void sobreMim() {

    char escolha;
    system("cls");
    cout << "Eu sou Luanna Carmem, tenho 25 anos e sou novata na �rea da programa��o." << endl;
    cout << "Todo o jogo foi desenvolvido na linguagem c++." << endl;

    cout << "\nDeseja voltar ao menu inicial?(s/n) " << endl;
    cin >> escolha;

    if (escolha == 's' || escolha == 'S') {
        cout << endl;
        cout << "Retornaremos ao menu principal em um instante" << endl;
        Sleep(500);
        system("cls");
        menu();
    } else {
        cout << endl;
        cout << "Programa finalizando" << endl;
        Sleep(500);
        system("pause");
    }
}
        // Menu principal do jogo, utilizou-se um switch case para armazenar as fun��es referente a cada op��o
void menu() {

    int opcao;

    cout << "----------BEM VINDO AO CAMPO MINADO----------" << endl;
    cout << endl;
    cout << "      *******  Menu Principal  *******" << endl << endl;
    cout << "1. Novo Jogo" << endl;
    cout << "2. Sobre o jogo" << endl;
    cout << "3. Sobre o mim" << endl;
    cout << "4. Sair" << endl;
    cout << endl;
    cout << "Informe a op��o desejada: ";
    cin >> opcao;
    system ("cls");

    switch(opcao){

    case 1:
        novoJogo();
    break;
    case 2:
        sobreJogo();
    break;
    case 3:
        sobreMim();
    break;
    case 4:
        system("pause");
    break;
    default:
        cout << "Op��o inv�lida!!!" << endl;
        system("pause");
        system("cls");
        main();
    break;

    }

    return;

}

