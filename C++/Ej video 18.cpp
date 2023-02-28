#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){

    int cubo=0, opc;
    int numero=0, deter=0, machine=0;

    cout<<"\tBienvenido a su calculadora limitada automatica/virtual"<<endl;

    cout<<"1. Ingresar un numero entero para elevarlo al cubo"<<endl;
    cout<<"2. Ingresar un numero entero para determinar si es par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opc;

    switch(opc){
        case 1:
        cout<<"Escriba un numero: ";cin>>numero;
       cubo = pow(numero,3);
        cout<<"El resultado es: "<<cubo;
        break;

        case 2:
        cout<<"Escriba un numero: ";cin>>deter;
        machine = deter % 2;
        if(machine==0){
            cout<<"Escribio un numero par";
        }
        else{
        cout<<"Escribio un numero impar";
        }
        break;

        case 3: cout<<"Adios, vuelva pronto";break;
    }
    getch();
    return 0;
}
