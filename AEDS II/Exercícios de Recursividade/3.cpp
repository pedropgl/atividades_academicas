#include <iostream>
#include <windows.h>
using namespace std;
 
void invertevetor(int v[],int esq,int dir);

int main(){
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int v[3] = {7,14,21};

  cout << "Vetor Invertido: " << "\n";
  invertevetor (v,0,2);
  for(int i=0;i < 3;i++){
  cout << v[i] << "\n";
  }

  cout << "\n";
  system("pause");
  return 0;
}

void invertevetor(int v[],int esq,int dir){
  if(esq>=dir){
    return;
  }

  int aux = v[esq];
  v[esq] = v[dir];
  v[dir] = aux;
  invertevetor(v,esq+1,dir-1);
}
