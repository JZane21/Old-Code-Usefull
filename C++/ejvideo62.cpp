
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;
struct persona{

    char per[40];
    int dis;

}persona[100];
int main(){
    int Nper;
    char nombre[100],discapacidad[100];
    char grupo1[300], grupo2[300];

    cout<<"Escriba el numero de personas presentes: "; cin>>Nper;

    for(int i=0;i<Nper;i++){
        fflush(stdin);
        cout<<"\nEscriba su nombre: "; cin.getline(persona[i].per,40,'\n');
        fflush(stdin);
        cout<<"Usted posee una discapacidad? ('Si=1' o 'No=0'): "; cin>>persona[i].dis;

        if(persona[i].dis == 1){
            cout<<"\nPersonas CON discapacidad: ";
            cout<<"\nNombres: "<<persona[i].per;
        }
        if(persona[i].dis == 0){
            cout<<"\nPersonas SIN discapacidad: ";
            cout<<"\nNombres: "<<persona[i].per;
        }

    }

    cout<<"\n";
/*
    cout<<"\nPersonas CON discapacidad: ";
    cout<<"\nNombres: "<<grupo1[300]<<" ";

    cout<<"\nPersonas SIN discapacidad: ";
    cout<<"\nNombres: "<<grupo1[300]<<" ";
*/
    cout<<"\n";
    system("pause");
    return 0;
}
