
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[30];
    int edad;
    char sexo[10];
    char club[30];
}c1;

int main(){
    char categoria[20];

    cout<<"Escriba su nombre: "; cin.getline(c1.nombre,30,'\n');
    cout<<"Escriba su edad: "; cin>>(c1.edad);
    fflush(stdin);
    cout<<"Escriba su sexo: "; cin.getline(c1.sexo,10,'\n');
    cout<<"Escriba el nombre del club al que pertenece: "; cin.getline(c1.club,30,'\n');

    if(c1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }
    else if(c1.edad <= 40){
        strcpy(categoria,"Veteranos");
    }
    else{
        strcpy(categoria,"Retirados");
    }

    cout<<"\n\nDatos del corredor: "<<endl;

    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    system("pause");
    return 0;
}
