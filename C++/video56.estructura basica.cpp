
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct persona{
    char nombre[20];
    int edad;
}persona1,persona2;

int main(){
    cout<<"Escriba un nombre: "; cin.getline(persona1.nombre,20,'\n');
    cout<<"Escriba una edad: "; cin>>persona1.edad;
    cout<<"\n";
    fflush(stdin);
    cout<<"Escriba otro nombre: "; cin.getline(persona2.nombre,20,'\n');
    cout<<"Escriba otra edad: "; cin>>persona2.edad;

    cout<<"\n";
    cout<<"Nombre de la persona 1: "<<persona1.nombre;
    cout<<"\nEdad de la persona 1: "<<persona1.edad;
    cout<<"\nNombre de la persona 2: "<<persona2.nombre;
    cout<<"\nEdad de la persona 2: "<<persona2.edad<<endl;

    system("pause");
    return 0;
}
