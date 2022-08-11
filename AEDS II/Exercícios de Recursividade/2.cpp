#include <iostream>
#include <windows.h>
using namespace std;
 
int SomaVetor(int v[],int tam);

int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int v[3] = {1,2,3};

  cout << SomaVetor(v,3);

  cout << "\n";
  system("pause");
  return 0;
}

int SomaVetor(int v[],int tam){
  if (tam == 0){
    return 0;
  }

  if(tam == 1){
    return v[0];
  }

  return v[tam-1] + SomaVetor(v,tam-1);
}