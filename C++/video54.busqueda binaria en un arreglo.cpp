
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[]={1,2,3,4,5,6,7,8,9,10};
    int inf,sup,mitad,dato;
    char band='F';

    cout<<"Escriba un numero del 1 al 10: ";cin>>dato;

    inf = 0;
    sup = 10;

    while(inf <= sup){
        mitad = (inf+sup)/2;

        if(numeros[mitad] == dato){
            band='V';
            break;
        }
        if(numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(numeros[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }

    if(band == 'V'){
        cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
        cout<<"1 2 3 4 5 6 7 8 9 10";
        cout<<"\n0 1 2 3 4 5 6 7 8 9"<<endl;
    }
    else{
        cout<<"El numero NO ha sido encontrado"<<endl;
    }

    system("pause");
    return 0;
}
