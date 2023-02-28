
#include<iostream>
#include<stdlib.h>
using namespace std;

struct persona{
    char nombre[50];
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(persona);

int main(){
    pedirDatos();
    mostrarDatos(p1);



system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba su nombre: ";
    cin.getline(p1.nombre,50,'\n');
    cout<<"Escriba su edad: ";
    cin>>p1.edad;
}
void mostrarDatos(persona p){
    cout<<"\n\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}
