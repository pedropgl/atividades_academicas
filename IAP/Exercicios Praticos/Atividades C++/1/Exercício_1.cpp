#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i, a = 0, b = 1, seq = 0;



    cout << "Quantos n�meros voc� deseja ter na sequ�ncia: ";
    cin >> n;
	
	system("cls");

    if(n == 0){
        system("cls");
        cout << "Sequ�ncia finalizada";
    }

    if(n == 1){
        cout << "[0]";
    }

    else if(n >= 2){
        cout << "[0] [1]";
    
	    for(int i = 0; i < n-2; i++){
	        seq = a + b;
	        cout << " [" << seq << "]";
    
    	a = b;
    	b = seq;
		}
	}
	
	cout << "\n\n";
	
    system("pause");
    return 0;
}
