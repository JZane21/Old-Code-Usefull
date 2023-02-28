
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    char palabra[10];
    int longitud = 0;

    cout<<"Escriba alguna frase: ";
    gets(palabra);

    longitud = strlen(palabra);

    if(longitud>10){
        cout<<"Numero de elementos de la cadena: "<<longitud<<endl;
    }
    else{
        cout<<"\nNo hay suficiente numero de elementos"<<endl;
    }

    getch();
    return 0;
}
