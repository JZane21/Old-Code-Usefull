#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
int m[100][100],filas,col;
void peque(int m[100][100],int,int);

int main(){
    pedirDatos();
    peque(m,filas,col);

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba el numero de filas: ";
    cin>>filas;
    cout<<"Escriba el numero de columnas: ";
    cin>>col;
    for(int i=0;i<filas;i++){
        for(int j=0;j<col;j++){
            cout<<"Escriba un numero ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
}
void peque(int m[100][100],int filas,int col){
    for(int i=0;i<filas;i++){
        for(int j=0;j<col;j++){
            if(m[i][j]<m[i][j+1]){
                cout<<"Estos son los peques"<<m[i][j];
                cout<<"\n";
            }
        }
    }
}
