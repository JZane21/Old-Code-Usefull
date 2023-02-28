
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int bolsa=1000, opc;
    float extra=0, saldo=0, retiro=0;

    cout<<"\tBienvenido a su cajero automatico/virtual"<<endl;

    cout<<"1. Ingresar dinero a la cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opc;

    switch(opc){
        case 1:
        cout<<"Escriba la cantidad de dinero que desea depositar: ";cin>>extra;
        saldo=bolsa+extra;
        cout<<"Su saldo es de: "<<saldo;
        break;

        case 2:
        cout<<"Escriba la cantida de dinero que desea retirar: ";cin>>retiro;
        if(retiro>bolsa){
            cout<<"Usted NO tiene esa cantidad de dinero";
        }
        else{
        saldo=bolsa-retiro;
        cout<<"Su saldo es de: "<<saldo;
        }
        break;

        case 3: cout<<"Adios, vuelva pronto";break;
    }

    system("pause");
    return 0;
}
