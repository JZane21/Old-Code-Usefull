
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct promedio{
    float nota1;
    float nota2;
    float nota3;
}pro[100];

struct alumno{
    char nombre[50];
    char genero[20];
    int edad;
}alumno[100];

int main(){
    float nt=0;

    fflush(stdin);
    cout<<"Escriba su nombre: "; cin.getline(alumno[100].nombre,50,'\n');
    cout<<"Escriba al genero que pertenece: "; cin.getline(alumno[100].genero,20,'\n');
    cout<<"Escriba su edad: "; cin>>alumno[100].edad;
    cout<<"\n";
    fflush(stdin);
    cout<<"Escriba la nota del primer examen: "; cin>>pro[100].nota1;
    cout<<"Escriba la nota del segundo examen: "; cin>>pro[100].nota2;
    cout<<"Escriba la nota del tercer examen: "; cin>>pro[100].nota3;
    fflush(stdin);

    nt += (pro[100].nota1+pro[100].nota2+pro[100].nota3)/3;

    cout<<"\n";
    cout<<"Nombre: "<<alumno[100].nombre<<endl;
    cout<<"Genero: "<<alumno[100].genero<<endl;
    cout<<"Edad: "<<alumno[100].edad<<endl;
    cout<<"Promedio total: "<<nt<<endl;

    system("pause");
    return 0;
}
