
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;
int main(){
    int pe=50;
    int o4, o5, o6;

    cout<<"Adonde ir ahora?\n";

    cout<<"\n1. Dormitorio de los padres"<<endl;
    cout<<"2. Dormitotio de la rehen"<<endl;
    cout<<"3. Living"<<endl;
    cout<<"4. Cocina"<<endl;
    cout<<"5. Pasillo"<<endl;
    cout<<"6. Azotea"<<endl;

    cout<<"Opcion: "; cin>>o4;

     switch(o4){
        case 1:
        cout<<"\nCaminas con direccional dormitorio"<<endl;
        system("pause");
        cout<<"\nTe encuentras en el dormitorio de los padres"<<endl;
        break;

        case 2:
        cout<<"\nCaminas con direccion al dormitorio"<<endl;
        system("pause");
        cout<<"\nTe encuentras en el dormitorio de la rehen"<<endl;
        break;

        case 3:
        cout<<"\nCaminas con direccion al living"<<endl;
        system("pause");
        cout<<"\nTe encuentras en el living"<<endl;
        break;

        case 4:
        cout<<"\nCaminas con direccion a la cocina"<<endl;
        system("pause");
        cout<<"\nTe encuentras en la cocina"<<endl;
        break;

        case 5:
        cout<<"\nCaminas con direccion al pasillo"<<endl;
        system("pause");
        cout<<"\nTe encuentras en el pasillo"<<endl;
        break;


        case 6:
        if(pe>=80){
        cout<<"\nCaminas con direccion a la azotea"<<endl;
        system("pause");
        cout<<"\nTe encuentras en la azotea"<<endl;
        }
        else{
        cout<<"\nDebe tener al menos un 80% de probabilidad de exito"<<endl;
        cout<<"\nSeleccione otra opcion"<<endl;
        o4 -= 6;
        }
        break;
    }
    system("pause");
    return 0;
}
