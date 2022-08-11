#include <iostream>
#include <time.h> // permite estabelecer um tempo
#include <windows.h> // garante a aleatoriedade das minas
#include <conio.h> // Permite o uso da função getch(captura um caractere da entrada e retorna) dentro da função dificuldade()
using namespace std;

        // Funções utilizadas para rodar toda a estrutura do jogo.
int dificuldade(int);
void imprimiCampo(char);
void imprimeCampoMinado();
void novoJogo();
void sobreJogo();
void sobreMim();
void menu();
// a main vai ler todos os menus e permitirá que o jogo seja rodado
int main()
{
    // coloca toda a linguagem em português-PTBR
    setlocale(LC_ALL,"Portuguese");

    menu();

    return 0;
}
        //variáveis utilizadas no programa
        int dificuldade(int nvl) {
        int minas;
        int escolha;
        if(nvl == 1){
        cout << endl;
        cout << " NÍVEL INICIANTE: " << endl << endl;
        cout << " Nesse primeiro nível você vai se familiarizando com o jogo, teremos 4 minas espalhadas no campo!" << endl;
        cout << " Boa sorte!";

        cout << "\n\nDeseja escolher outro nível[1] ou continuar[2]? " << endl;
        cin >> escolha;
        system ("cls");

                    // condicional que permite com que o usuário escolha continuar ou escolher outra opção
        if (escolha == 1) {
            cout << endl;
            cout << " Retornaremos ao menu de seleção em um instante" << endl;
            Sleep(700);
            system("cls");
            novoJogo();
        } else if (escolha == 2){
            cout << endl;
            cout << "Entraremos no mapa do jogo em um instante";
            for (int i=0; i<7; i++) {
            Sleep(300);

        }
        // de qualquer forma o usuário teria que apertar enter para continuar, aqui só deixamos claro a ele
        cout << endl << endl;
        cout << "[APERTE ENTER PARA CONTINUAR] " << endl;
        getch();

        } else {
            cout << "Opção inválida!!!" << endl;
            cout << "Retornaremos ao menu de seleção em um instante";
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
            cout << "NÍVEL FÁCIL: ";
            cout << "Bom, já que não é sua primeira vez aqui, não vamos facilitar pra você" << endl;
            cout << "mas, nem por isso vamos dificultar também." << endl;
            cout << "Teremos 6 minas espalhadas pelo mapa. Boa sorte." << endl;

            cout << "\n\nDeseja escolher outro nível[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << endl;
            cout << "Retornaremos ao menu de seleção em um instante" << endl;
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
            cout << "Opção inválida!!!" << endl;
            cout << "Retornaremos ao menu de seleção em um instante";
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
                cout << "NÍVEL INTERMEDIÁRIO: ";
                cout << endl;
                cout << "As coisas estão começando a ficarem complicadas, mas sei que você é capaz!" << endl;
                cout << "Teremos 14 minas espalhadas pelo mapa. Boa sorte" << endl;

                cout << "\n\nDeseja escolher outro nível[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << "Retornaremos ao menu de seleção em um instante" << endl;
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
            cout << "Opção inválida!!!" << endl;
            cout << "Retornaremos ao menu de seleção em um instante";
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
                    cout << "NÍVEL DIFÍCIL: ";
                    cout << endl;
                    cout << "Temos alguém realmente ousado aqui, e não sou. Chegamos ao último nível" << endl;
                    cout << "Sei que é capaz de conseguir, teremos 17 minas espalhadas pelo mapa. Boa sorte!!";

                    cout << "\n\nDeseja escolher outro nível[1] ou continuar[2]? " << endl;
        cin >> escolha;

        if (escolha == 1) {
            cout << "Retornaremos ao menu de seleção em um instante" << endl;
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
            cout << "Opção inválida!!!" << endl;
            cout << "Retornaremos ao menu de seleção em um instante";
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
        // Imprimi o campo minado jogável onde será atualizados a cada escolha do usuário
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
        // Roda todo o jogo depois de escollhida a primeira opção do menu principal
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
    cout << "Escolha o nível de dificuldade em que pretende jogar, porém escolha com cautela hihihih" << endl << endl;
        cout << "1. Iniciante" << endl;
        cout << "2. Fácil" << endl;
        cout << "3. Intermediário" << endl;
        cout << "4. Difícil" << endl;
    cout << "Informe a opção desejada: ";
    cin >> nvl;
     do{
        cout << "Dificuldade: " << nvl << endl;
    }while(nvl <1 || nvl > 4);

            // Variável "minas" irá armazenar a quantidade de minas conforme a dificuldade escolhida.
    minas = dificuldade(nvl);

    for(i = 0; i < 5 ; i++) { // Laço feito para gerar um campo vazio
        for(j = 0 ; j < 5 ; j++)
            campominado[i][j] = 0;
    }

    for(i = 0; i < 5 ; i++) { // mostra os espaços em branco na matriz
        for(j = 0 ; j < 5 ; j++)
            cAuxiliar[i][j] = ' ';
    }

  for( linha = 0 ; linha < minas ; linha++) {   // isso garante a randomização das minas no mapa.
        campominado[rand()%5][rand()%5] = 1 ;

    system("cls");
    imprimiCampo(cAuxiliar); // Aqui será onde o campo irá ser imprimido na tela pela primeira vez

  }
    for(jogada = 1 ; jogada < 4 ; jogada++){ // como a matriz e 5 por 5, indo de 0,1,2,3,4, por isso jogadas são menores que 4
        do{ // usado para não contabilizar jogada inválida
            cout << endl << endl;
            cout << "Informe a linha que voce quer jogar: " << endl;
            cin >> linha;
            cout << "Informe a coluna que voce quer jogar: " << endl;
            cin >> coluna;
            system("cls");
            imprimiCampo(cAuxiliar); // O campo minado será atualizado e mostra na tela a posição marcada.

        }while((linha < 0 || linha > 4) || ( coluna < 0 || coluna > 4));

        if(campominado[linha][coluna] == 1){ // aqui ocorre se o usuário marcar espaço com mina, ai o jogo acaba
            marcador=1;
            system("cls");


cout << "\n\n                          VOCÊ PISOU NA MINA!!!                                       " << endl << endl;
cout << "\n\n                              FIM DE JOGO                                             " << endl << endl;



            cout << "\n\nDeseja voltar ao menu inicial ?(s/n) " << endl;
            cin >> escolha;

            if (escolha == 's' || escolha == 'S') { // Condicional "if" feita para o caso o usuário deseje voltar ao menu ou finalizar o programa.
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
         cAuxiliar[linha][coluna]= 'X';// condição se marcar um espaço sem mina, vai aparecer o X no tabuleiro
            system("cls");
                imprimiCampo(cAuxiliar);
        }
    }
    if(marcador==0) { // condição que marca como vencedor o usuários que conseguiu não pisar nas minas
        system("cls");
        cout << "Você não pisou em nenhuma bomba espalhada pelo mapa! \n" << endl << endl;
        cout << "          Parabéns,  You are is champion!             " << endl << endl;

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


        // Função criada para imprimir na tela detalhes sobre o jogo e como ele funciona
void sobreJogo() {
    char escolha;
    system("cls");

    cout << "Campo minado é um popular jogo de computador para um jogador." << endl;
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
    cout << "Eu sou Luanna Carmem, tenho 25 anos e sou novata na área da programação." << endl;
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
        // Menu principal do jogo, utilizou-se um switch case para armazenar as funções referente a cada opção
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
    cout << "Informe a opção desejada: ";
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
        cout << "Opção inválida!!!" << endl;
        system("pause");
        system("cls");
        main();
    break;

    }

    return;

}

