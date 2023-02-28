
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;
int main(){

    int pe = 50;
    int connor;
    int o1, o2, o3;

    cout<<"Detroit Fan Demo\n";
    system("pause");
    cout<<"\nRecuerda, cualquier accion que tomes, alterara el curso de la historia, deacuerdo?(probabilidad de exito actual: 50%)\n";
    system("pause");
    cout<<"\nLlegas en un elevador a un departamento, para salvar a una niña."<<endl;
    system("pause");
    cout<<"\nAl entrar, ves una foto de la familia. Luego la tomas:"<<endl;
    system("pause");

    cout<<"1. Inspeccionar foto"<<endl;
    cout<<"2. Soltarla"<<endl;

    cout<<"Opcion: "; cin>>o1;

    switch(o1){
        case 1:
        cout<<"\nObservaste a los familiares, lograste recolectar datos importantes sobre ellos"<<endl;
        system("pause");
        cout<<"Colocas la foto en su lugar"<<endl;
        pe += 1;
        cout<<"\nNueva probabilidad de exito: "<<pe<<"%"<<endl;
        break;

        case 2:
        cout<<"\nColocas la foto en su lugar"<<endl;
        cout<<"\nNueva probabilidad de exito: "<<pe<<"%"<<endl;
        break;
    }
    system("pause");
    cout<<"\nSigues con tu camino\n"<<endl;
    system("pause");
    cout<<"Caminas y te dirijes hacia donde se encuentra el capitan de fuerzas especiales\n";
    system("pause");
    cout<<"Comandante: Al fin llegaste, ese androide no tiene limites.\n";
    system("pause");
    cout<<"Comandante: Ya se ha cargado a dos de mis hombres\n";
    cout<<"Comandante: Podria ordenar que lo acaben de una vez, pero esta al borde del edificio\n";
    cout<<"Comandante: Y si el cae, ella tambien\n";
    system("pause");


    //hablar con el comandante
    cout<<"1. Actitud"<<endl;
    cout<<"2. Codigo de desactivacion"<<endl;
    cout<<"3. Nombre"<<endl;
    cout<<"4. Estado Rehen"<<endl;

    cout<<"Opcion: "; cin>>o2;
    switch(o2){
        case 1:
        cout<<"\nConnor: El divergente presento algun cambio de actitud ultimamente?"<<endl;
        system("pause");
        cout<<"\nComandante: Y eso que nos interesa?"<<endl;
        system("pause");
        cout<<"\nConnor: Necesito informacion de su perfil psicologico para saber como actuar"<<endl;
        break;

        case 2:
        cout<<"\nConnor: Trataron de desactivarlo?"<<endl;
        system("pause");
        cout<<"\nComandante: Fue lo primero que intentamos, pero el bastardo ya se encontraba en la cornisa"<<endl;
        cout<<"Comandante: Y si lo intentabamos, ella podria caer con el"<<endl;
        cout<<"Comandante: asi que no nos vamos a arriesgar"<<endl;
        break;

        case 3:
        cout<<"\nConnor:Saben como se llama el divergente?"<<endl;
        system("pause");
        cout<<"\nComandante: Y eso en que nos va ha ayudar?"<<endl;
        system("pause");
        cout<<"\nConnor: Podria ayudarnos en la negociacion"<<endl;
        system("pause");
        cout<<"\nComandante: Dudo que el quiera negociar, y eso no nos interesa ahora"<<endl;
        break;

        case 4:
        cout<<"\nSaben como se encuentra la rehen?"<<endl;
        system("pause");
        cout<<"\nLo unico que sabemos es que esta al borde del edifico"<<endl;
        cout<<"Tal vez solo este asustada"<<endl;
        break;

    }
    system("pause");

    //hablar con el comandante 2
    cout<<"1. Francotiradores"<<endl;
    cout<<"2. Inspeccionar"<<endl;
    cout<<"3. Negociacion"<<endl;
    cout<<"4. Helicoptero"<<endl;

    cout<<"Opcion: "; cin>>o3;
    switch(o3){
        case 1:
        cout<<"\nConnor: Porque los francotiradores no han disparado aun?"<<endl;
        system("pause");
        cout<<"\nComandante: No entiendes o que?!"<<endl;
        cout<<"Comandante: Si el cae, ella igual..."<<endl;
        system("pause");
        cout<<"\nComandante: Lo voy a poner asi..."<<endl;
        cout<<"Comandante: O tu la salvas, o lo hago yo"<<endl;
        pe -= 2;
        cout<<"\nNueva probabilidad de exito: "<<pe<<"%"<<endl;
        break;

        case 2:
        cout<<"\nConnor: Inspeccionaron el departamento para encontrar pistas?"<<endl;
        system("pause");
        cout<<"\nComandante: No tuvimos tiempo"<<endl;
        cout<<"Comandante: Y tambien te enviaron por eso"<<endl;
        cout<<"Comandante: Asi que no nos descepciones, androide"<<endl;
        pe += 1;
        cout<<"\nNueva probabilidad de exito: "<<pe<<"%"<<endl;
        break;

        case 3:
        cout<<"\nConnor: Prepare a sus hombres y que esten listos"<<endl;
        cout<<"Connor: Yo me encargare"<<endl;
        system("pause");
        cout<<"\nComandante: Mas te vale androide"<<endl;
        cout<<"Comandante: Y no importa lo que pase, salvala"<<endl;
        pe += 2;
        cout<<"\nNueva probabilidad de exito: "<<pe<<"%"<<endl;
        break;

        case 4:
        cout<<"\nConnor: Trataran de perseguirlo si huye?"<<endl;
        system("pause");
        cout<<"\nComandante: El no huira"<<endl;
        cout<<"Comandante: Lo que hara sera saltar"<<endl;
        cout<<"Comandante: Y es una opcion que espero que no tome. Asi que trabaja, androide"<<endl;
        pe -= 1;
        cout<<"\nNueva probabilidad de exito: "<<pe<<endl;
    }
    system("pause");
    return 0;
}
