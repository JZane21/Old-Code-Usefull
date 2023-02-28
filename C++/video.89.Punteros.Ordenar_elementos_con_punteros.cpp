#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
int nElementos, *elemento;
void ordenarArray(int *,int);
void mostrarArray(int *,int);

int main(){
    pedirDatos();
    ordenarArray(elemento,nElementos);
    mostrarArray(elemento,nElementos);

    delete[] elemento;//liberando memoria utilizada para nuestro array dinamico

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba el numero de elementos del array: ";
    cin>>nElementos;

    elemento=new int[nElementos];//crear array

    for(int i=0;i<nElementos;i++){
        cout<<"Escriba un numero ["<<i<<"]: ";
        cin>>*(elemento+i);//es lo mismo que escribir elemento[i]
    }
}
void ordenarArray(int *elemento,int nElementos){
    int aux=0;

    for(int i=0;i<nElementos;i++){
        for(int j=0;j<nElementos;j++){
            if(*(elemento+j)>*(elemento+j+1)){
                aux=*(elemento+j);
                *(elemento+j)=*(elemento+j+1);
                *(elemento+j+1)=aux;
            }
        }
    }

}
void mostrarArray(int *elemento,int nElementos){
    cout<<"\n\nMostrando array ordenado: ";
    for(int i=0;i<nElementos;i++){
        cout<<*(elemento+i)<<" ";
    }
}
