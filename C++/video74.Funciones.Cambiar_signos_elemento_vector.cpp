#include<iostream>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void cambiarSigno(int vec[],int);
void mostrarVector(int vec[],int);
int vec[100],tam;
int main(){
    pedirDatos();
    cambiarSigno(vec,tam);
    mostrarVector(vec,tam);
system("pause");
return 0;
}

void pedirDatos(){
    cout<<"Escriba el largo del vector: ";
    cin>>tam;
    cout<<"\n";
    for(int i=0;i<tam;i++){
        cout<<i+1<<"Escriba un numero: ";
        cin>>vec[i];
    }
}

void cambiarSigno(int vec[],int tam){
    for(int i=0;i<tam;i++){
        vec[i]*=-1;
    }
}

void mostrarVector(int vec[],int tam){
    cout<<"\nMostrando los elementos del vector con signo cambiado:\n";
    for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
}
