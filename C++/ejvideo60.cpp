#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct atleta{
    char nombre[30];
    char pais[20];
    int numero_medallas;
}emp[100];

int main(){
    int numero_atletas = 0, posM=0,posm=0;
    float mayor = 0 , menor = 9999999;

    cout<<"Escriba el numero de atletas: ";
    cin>>numero_atletas;
    fflush(stdin);
    for(int i=0;i<numero_atletas;i++){
        cout<<i+1<<"Escriba su nombre: "; cin.getline(emp[i].nombre,30,'\n');
        cout<<i+1<<"Escriba el nombre de su pais: "; cin.getline(emp[i].pais,20,'\n');
    fflush(stdin);
        cout<<i+1<<"Escriba el numero de medallas que haya ganado: "; cin>>emp[i].numero_medallas;
    fflush(stdin);
        if(emp[i].numero_medallas > mayor){
            mayor = emp[i].numero_medallas;
            posM = i;
        }
        if(emp[i].numero_medallas < menor){
            menor = emp[i].numero_medallas;
            posm = i;
        }

        cout<<"\n";
    }
    fflush(stdin);

    cout<<"\n.:Datos del atleta con mas medallas ganadas:.\n";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Pais: "<<emp[posM].pais<<endl;

    cout<<"\n";

    cout<<".:Datos del atleta con menos medallas ganadas:.\n";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Pais: "<<emp[posm].pais<<endl;

    system("pause");
    return 0;
}
