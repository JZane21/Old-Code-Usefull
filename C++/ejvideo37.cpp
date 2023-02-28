
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[100][100];
    int n1=0,n2=0;
    int matriz2[100][100] = {n1,n2};
    int filas, columnas;

    cout<<"Escriba el numero de filas menor a 100: "; cin>>filas;
    cout<<"\nEscriba el numero de columnas: "; cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           do{
            n1 += i;
            n2 += j;
           }while((n1<filas)||(n2<columnas));
        }
    }

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz2[i][j] = numeros[i][j];
        }
    }

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz2[i+n1][j+n2];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
