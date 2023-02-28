
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

struct tiempo{
    int horas;
    int minutos;
    int segundos;
}etapas[100];

int main(){
    int n_etapas, horasT=0, minutosT=0, segundosT=0;

    cout<<"Escriba el numero de etapas: "; cin>>n_etapas;

    for(int i=0;i<n_etapas;i++){
        cout<<"Horas: "; cin>>etapas[i].horas;
        cout<<"Minutos: "; cin>>etapas[i].minutos;
        cout<<"Segundos: "; cin>>etapas[i].segundos;

        horasT += etapas[i].horas;
        minutosT += etapas[i].minutos;
        if(minutosT>=60){
            minutosT -= 60;
            horasT++;
        }
        segundosT += etapas[i].segundos;
        if(segundosT>=60){
            segundosT -= 60;
            minutosT++;
        }
        cout<<"\n";
    }

    cout<<"\nTiempo total empleado\n";
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;

    system("pause");
    return 0;
}
