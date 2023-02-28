
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    /*este programa igual se puede cambiar
    para que busque letras, pero meh*/
    int a[]={3,4,2,1,5,0,9,6,8,7,10};
    int i,dato;
    char band='F';

    cout<<"Escriba un numero del 0 al 10: "; cin>>dato;
    i=0;
    while((band=='F')&&(i<11)){
        if(a[i]==dato){
            band='V';
        }
        i++;
    }

    if(band=='F'){
        cout<<"El numero a buscar no existe en el arreglo";
    }
    else if(band=='V'){
        cout<<"El numero se encuentra en la posicion: "<<i-1;
        cout<<"\nnum: 3 4 2 1 5 0 9 6 8 7 10";
        cout<<"\npos: 0 1 2 3 4 5 6 7 8 9 10"<<endl;
    }
    cout<<"\n";
    system("pause");
    return 0;
}
