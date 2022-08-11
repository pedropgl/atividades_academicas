#include <iostream>
#include <windows.h>
using namespace std;
#define NUM_HABITANTES 1

struct HABITANTES{
    float salario;
    int idade;
    int filhos;
    char sexo;
};

void A (HABITANTES pessoa[NUM_HABITANTES], float mediasalario, float totalsal){
    mediasalario = totalsal/NUM_HABITANTES;
     cout << "\nA média de salário da população é: $" << mediasalario;
}

void B (HABITANTES pessoa[NUM_HABITANTES], float mediafilhos, float totalfi){
    mediafilhos = totalfi/NUM_HABITANTES;
    cout << "\nA média de filhos da população é de " << mediafilhos << " filhos.";

}

void C (HABITANTES pessoa[NUM_HABITANTES], float maiorsalario){
    cout << "\nO maior salário entre os habitantes é de $" << maiorsalario;
}

void D (HABITANTES pessoa [NUM_HABITANTES],int mulherrica, int mulheres, float percentual){
    percentual = (mulherrica/mulheres)*100;
    cout << "\nO percentual de mulheres que recebe mais de $1.000 é de " << percentual << "% .";
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    HABITANTES pessoa[NUM_HABITANTES];

    float total_salario = 0, media_filhos=0, media_salario = 0, percentual_mulheres=0, maior_salario = 0;
    int total_filhos = 0, total_mulheres = 0, mulheres_ricas = 0;

    for (int i = 0; i < NUM_HABITANTES; i++){
        cout << "Sexo: ";
        cin >> pessoa[i].sexo;

        if (pessoa[i].sexo == 'f'){
            total_mulheres++;
        }

        cout << "Idade: ";
        cin >> pessoa[i].idade;

        cout << "Número de Filhos: ";
        cin >> pessoa[i].filhos;
        total_filhos += pessoa[i].filhos;

        cout << "Salário: ";
        cin >> pessoa[i].salario;
        total_salario += pessoa[i].salario;

        if (pessoa[i].salario > maior_salario){
            maior_salario = pessoa[i].salario;
        }

        if (pessoa[i].sexo == 'f' && pessoa[i].salario > 1000){
            mulheres_ricas++;
        }
    }

    system("cls");

    A(pessoa,media_salario,total_salario);
    B(pessoa,media_filhos,total_filhos);
    C(pessoa,maior_salario);
    D(pessoa,mulheres_ricas,total_mulheres,percentual_mulheres);

    cout << "\n\n\n";
    system("pause");
    return 0;
}