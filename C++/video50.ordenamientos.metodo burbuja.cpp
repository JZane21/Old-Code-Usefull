
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[100],tope;
    int i,j,aux;

    cout<<"Digite un numero: ";cin>>tope;
    for(int i=0;i<tope;i++){
        cout<<"Digite un numero para ["<<i<<"] : ";
        cin>>numeros[i];
    }

    //algoritmo metodo burbuja
    for(i=0;i<tope-1;i++){
        for(j=tope+1;j<tope;j++){
            if(numeros[i] > numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<tope;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"\n";
    system("pause");

    cout<<"\nOrden Descendente: ";
    for(i=(tope-1);i>=0;i--){
        cout<<numeros[i]<<" ";
    }
    cout<<"\n";

    system("pause");
    return 0;
}
