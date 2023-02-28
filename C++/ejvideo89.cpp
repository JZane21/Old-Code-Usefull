#include<iostream>
#include<stdlib.h>
using namespace std;
void pedirDatos();
int *elemento,nElementos,dato,i;
int bandera=0;
void seleccion(int *,int,int,int);
void mostrarArray(int *,int,int);

int main(){
    void pedirDatos();
    void seleccion(elemento,nElementos,i,dato);
    void mostrarArray(elemento,nElementos,i);

    delete[] elemento;

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba el numero de elmentos: ";
    cin>>nElementos;
    elemento=new int[nElementos];
    cout<<"\n";
    for(int i=0;i<nElementos;i++){
        cout<<"Escriba un elemento ["<<i<<"]: ";
        cin>>*(elemento+i);
    }
}
void seleccion(int *elemento,int nElementos,int dato=0,int i=0){
    cout<<"\nDigite un numero: ";
    cin>>dato;
    while((bandera==0)&&(i<nElementos)){
        if(*(elemento+i)==dato){
            bandera=1;
        }
        i++;
    }
}
void mostrarArray(int *elemento,int nElementos,int i=0){
    if(bandera==0){
        cout<<"No existe el numero que busca"<<endl;
    }
    else if(bandera==1){
        cout<<"El numero que busca se encuentra en: "<<i-1<<endl;
        cout<<"\n";
        for(int i=0;i<nElementos;i++){
            cout<<"Pos["<<i<<"]: "<<*(elemento+i)<<endl;
        }
    }
}
