
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
    int num[]={2,5,4,1,3};
    int i,pos,aux;

    //algoritmo del ordenamiento por insercion
    for(i=0;i<5;i++){
        pos = i;
        aux = num[i];

        while((pos>0)&&(num[pos-1]>aux)){
            num[pos]=num[pos-1];
            pos--;
        }
        num[pos]=aux;
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<num[i]<<" ";
    }

    cout<<"\n";
    system("pause");
    cout<<"\nOrden Descendente: ";
    for(i=4;i>=0;i--){
        cout<<num[i]<<" ";
    }

    cout<<"\n";
    system("pause");
    return 0;
}
