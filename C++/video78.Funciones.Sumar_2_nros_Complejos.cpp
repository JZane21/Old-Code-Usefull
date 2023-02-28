#include<iostream>
#include<stdlib.h>
using namespace std;

struct Complejo{
    float real,imaginaria;
}x,y;

void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();
    Complejo z=suma(x,y);
    muestra(z);


system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba los datos para el primer numero Complejo: "<<endl;
    cout<<"Parte real: ";
    cin>>x.real;
    cout<<"Parte imaginaria: ";
    cin>>x.imaginaria;

    cout<<"\nEscriba los datos para el segundo numero Complejo: "<<endl;
    cout<<"Parte real: ";
    cin>>y.real;
    cout<<"Parte imaginaria: ";
    cin>>y.imaginaria;
}
Complejo suma(Complejo x, Complejo y){
    x.real+=y.real;
    x.imaginaria+=y.imaginaria;

    return x;
}
void muestra(Complejo z){
    cout<<"\nResultado de la suma: "<<"("<<z.real<<")"<<"+"<<"("<<z.imaginaria<<")"<<endl;
}
