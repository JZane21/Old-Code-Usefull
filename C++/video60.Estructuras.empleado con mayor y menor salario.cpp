#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct Empleado{
    char nombre[30];
    float salario;
}emp[100];

int main(){
    int n_empleados = 0, posM=0,posm=0;
    float mayor = 0 , menor = 9999999;

    cout<<"Escriba el numero de empleados: ";
    cin>>n_empleados;
    fflush(stdin);
    for(int i=0;i<n_empleados;i++){
        cout<<i+1<<"Escriba su nombre: "; cin.getline(emp[i].nombre,30,'\n');
        cout<<i+1<<"Escriba su salario: "; cin>>emp[i].salario;
    fflush(stdin);
        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }
        if(emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }

        cout<<"\n";
    }

    cout<<"\n.:Datos del empleado con mayor salario:.\n";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    cout<<"\n";

    cout<<".:Datos del empleado con menor salario:.\n";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;

    system("pause");
    return 0;
}
