
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[]={3,1,4,5,2};
    int i,j,aux,mini;

    //algoritmo del ordenamiento por seleccion
    for(i=0;i<5;i++){
        mini = i;
        for(j=i+1;j<5;j++){
            if(numeros[j]<numeros[mini]){
                mini = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[mini];
        numeros[mini] = aux;
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\n";
    system("pause");

    cout<<"\nOrden Descendente: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    cout<<"\n";
    system("pause");
    return 0;
}
