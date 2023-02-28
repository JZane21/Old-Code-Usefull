#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void pedirDatos();
int vec[100],tam;
int calcular(int vec[],int);
int main(){
    pedirDatos();
    calcular(vec,tam);
    cout<<"La suma de los elementos del vector es: "<<calcular(vec,tam)<<endl;

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba el numero de elementos: "; cin>>tam;
    int i=0;
    while(i<tam){
        cout<<i+1<<".Digite un numero: ";cin>>vec[i];
        i++;
    }
}
int calcular(int vec[],int tam){
    int suma=0;
    for(int i=0;i<=tam;i++){
        suma += vec[i];
    }
    return suma;
}

