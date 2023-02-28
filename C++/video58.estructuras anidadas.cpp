
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[30];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){

    for(int i=0;i<2;i++){
        fflush(stdin);
        cout<<"Escriba su nombre: "; cin.getline(empleados[i].nombre,30,'\n');
        cout<<"Escriba su direccion: "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ciudad: ";cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Provincia: "; cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Salario: "; cin>>empleados[i].salario;
        cout<<"\n";
    }

    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }

    system("pause");
    return 0;
}
