
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[3][3];
    int numeros2[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Escriba un numero["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Escriba un numerox2["<<i<<"]["<<j<<"]: "; cin>>numeros2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<numeros[i][j]*numeros2[i][j];
        }
    cout<<"\n";
    }

    getch();
    return 0;
}
