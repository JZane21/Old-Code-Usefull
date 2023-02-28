#include<iostream>
#include<stdlib.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
    int totalseg, horas, min, seg;

    cout<<"Escriba el numero total de segundos: "; cin>>totalseg;

    tiempo(totalseg,horas,min,seg);

    cout<<"Tiempo equivalente a la cantidad de segundos digitados: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    system("pause");
    return 0;
}
void tiempo(int totalseg,int& horas, int& min, int& seg){
    horas = totalseg/3600;
    totalseg %= 3600;
    min = totalseg/60;
    seg = totalseg%60;
}
