#include<iostream>
#include<stdlib.h>
using namespace std;

int inicio[100],car;
int Numeros(int inicio[100],int);

int main(){

    Numeros(inicio,car);

system("pause");
return 0;
}
int Numeros(int inicio[100], int car){
   cout<<"Escriba el numero de caracteres: ";cin>>car;
   int aux=0;
   for(int i=0;i<car;i++){
        cout<<"Escriba un numero: ";cin>>inicio[i];
    }
    for(int i=0;i<car;i++){
        for(int j=0;j<car;j++){
            if(inicio[j]>inicio[j+1]){
                aux=inicio[j];
                inicio[j]=inicio[j+1];
                inicio[j+1]=aux;
            }
        }
    }
    cout<<"Orden Ascendente: ";
    for(int i=0;i<car;i++){
        cout<<inicio[i]<<" ";
    }
    cout<<"\n";
    system("pause");

    cout<<"\nOrden Descendente: ";
    for(int i=car;i>=0;i--){
        cout<<inicio[i]<<" ";
    }
    cout<<"\n";
}
