
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Escriba el numero de filas: "; cin>>filas;
    cout<<"Escriba el numero de columnas: "; cin>>columnas;

    //almacenando elementos en la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Escriba un numero["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }
    }

    //mostrando la matriz

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
            cout<<"\n";
    }

    getch();
    return 0;
}
