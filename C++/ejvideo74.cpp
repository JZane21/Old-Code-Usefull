#include<iostream>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void cambiarSigno(int vec[],int vec2[],int,int);
void mostrarVector(int vec[],int vec2[],int,int);
int vec[100],vec2[100],tam,tam2;
int main(){
    pedirDatos();
    cambiarSigno(vec,vec2,tam,tam2);
    mostrarVector(vec,vec2,tam,tam2);
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

void cambiarSigno(int vec[],int vec2[],int tam,int tam2){
    for(int i=0;i<tam;i++){
        if(vec[i]%2!=0){
            vec2[i]+=vec[i];
        }
    }
}

void mostrarVector(int vec[],int vec2[],int tam,int tam2){
    cout<<"\nMostrando los elementos del vector cambiando a impares:\n";
    for(int i=0;i<tam;i++){
        cout<<vec2[i]<<" ";
    }
    cout<<"\n";
}
