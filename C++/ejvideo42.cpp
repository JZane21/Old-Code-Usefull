
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char nombre[100];
    char nombre2[100];

    cout<<"Escriba lo que sea pero en letras: "; cin.getline(nombre,100,'\n');
    strcpy(nombre2,nombre);

    cout<<"Se acaba de cambiar la posicion de su arreglo a otro tipo n1=n2"<<endl;
    cout<<nombre2<<endl;

    getch();
    return 0;
}
