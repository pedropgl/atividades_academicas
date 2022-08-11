#include <iostream>
#include <windows.h>
using namespace std;
 
int p(int x,int y);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
  
    int r;

    r = p(4,5);
    cout << "Resultado: "<<  r << "\n";

    cout << "\n";
    system("pause");
    return 0;
}

int p(int x,int y){
  if(y == 0){
    return 1;
  }

  if(y == 1){
    return x;
  }

  return x* p(x,y-1);
}
