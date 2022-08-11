#include <iostream>
using namespace std;


int main()
{
    int i, j, k=1, mat[4][4];

    for(i=0; i<4; i++){
        for(j=0;j<4;j++){
            mat[i][j]=k;
            k++;
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    for(i=0; i<4; i++){
        for(j=4;j>=2;j--){
           if(i%j == 0){
            while(k > 0){
                cout << " " << mat[j][i] + k;
                k /= 2;
                cout << "\n";
            }
           }

        }

    }

    return 0;
}
