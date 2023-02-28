
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"escriba un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }

    }
    cout<<"esta es la matriz original\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j];
        }
    cout<<"\n";
    }

    cout<<"\nmatriz transpuesta\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[j][i];
        }
    cout<<"\n";
    }


    getch();
    return 0;
}
