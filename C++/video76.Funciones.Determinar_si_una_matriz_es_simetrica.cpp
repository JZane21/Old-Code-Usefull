#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100],int,int);
int m[100][100],nfilas,ncol;

int main(){
    pedirDatos();
    comprobarSimetria(m,nfilas,ncol);

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba el nro de filas de la matriz: ";
    cin>>nfilas;
    cout<<"Escriba el nro de columnas de la matriz: ";
    cin>>ncol;

    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            cout<<"Escriba un numero ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
}
void comprobarSimetria(int m[][100],int nfilas,int ncol){
    int cont=0;
    if(nfilas == ncol){
        for(int i=0;i<nfilas;i++){
            for(int j=0;j<ncol;j++){
                if(m[i][j]==m[j][i]){
                    cont++;
                }
            }
        }
    }

    if(cont==nfilas*ncol){
        cout<<"\nLa matriz es Simetrica"<<endl;
    }
    else{
        cout<<"\nLa matriz NO es simetrica"<<endl;
    }

}
