
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct estudiante{

    char nombre[30];
    int edad;
    double promedio;

}e1,e2,e3;

int main(){
    double nota1=0, nota2=0, nota3=0;
        cout<<"Escriba un nombre: "; cin.getline(e1.nombre,30,'\n');
        cout<<"Escriba una edad: "; cin>>e1.edad;
        cout<<"Escriba un promedio general: "; cin>>e1.promedio;

        fflush(stdin);
        cout<<"\nEscriba un nombre X2: "; cin.getline(e2.nombre,30,'\n');
        cout<<"Escriba una edad X2: "; cin>>e2.edad;
        cout<<"Escriba un promedio general X2: "; cin>>e2.promedio;

        fflush(stdin);
        cout<<"\nEscriba un nombre X3: "; cin.getline(e3.nombre,30,'\n');
        cout<<"Escriba una edad X3: "; cin>>e3.edad;
        cout<<"Escriba un promedio general X3: "; cin>>e3.promedio;

        cout<<"\n\nDatos:";

        cout<<"\nNombre: "<<e1.nombre;
        cout<<"\n";
        cout<<"Edad: "<<e1.edad;
        cout<<"\n";
        cout<<"Promedio general: "<<e1.promedio;
        cout<<"\n";

        cout<<"\nNombre: "<<e2.nombre;
        cout<<"\n";
        cout<<"Edad: "<<e2.edad;
        cout<<"\n";
        cout<<"Promedio general: "<<e2.promedio;
        cout<<"\n";

        cout<<"\nNombre: "<<e3.nombre;
        cout<<"\n";
        cout<<"Edad: "<<e3.edad;
        cout<<"\n";
        cout<<"Promedio general: "<<e3.promedio;
        cout<<"\n\n";

        nota1=e1.promedio;
        nota2=e2.promedio;
        nota3=e3.promedio;


    if((e1.promedio>e2.promedio)&&(e1.promedio>e3.promedio)){
        cout<<"El estudiante "<<e1.nombre<<" posee el promedio mas alto"<<endl;
    }
    else if((e2.promedio>e1.promedio)&&(e2.promedio>e3.promedio)){
        cout<<"El estudiante "<<e2.nombre<<" posee el promedio mas alto"<<endl;
    }
    else{
        cout<<"El estudiante "<<e3.nombre<<" posee el promedio mas alto"<<endl;
    }

    system("pause");
    return 0;
}
