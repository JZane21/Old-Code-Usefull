
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(){
    int numero, dato, contador = 0;

    srand(time(NULL));//esto va a generar un numero aleatorio
    dato = 1 + rand()%(100);

        cout<<"Bienvenido a este juego de c++"<<endl;
        system("pause");
        cout<<"Veamos si seras capaz de adivinar un numero entre el 1 y el 100"<<endl;
        system("pause");
        cout<<"Pero solo contaras con 10 intentos, vale?"<<endl;
        system("pause");
        cout<<"\nPara empezar, escriba un numero entero del 1 al 100"<<endl;
        system("pause");
        cout<<"\nDescuide, este intento es gratis"<<endl;
    do{
        cout<<"\nAhora escribalo: "; cin>>numero;

        if(numero>dato){
            cout<<"\ntrate con un numero entero menor\n";
        }
        if(numero<dato){
            cout<<"\ntrate con un numero entero mayor\n";
        }
        contador++;
    }while((numero != dato)&&(contador<=10));
    if(contador>10){
        cout<<"Lo siento amig@, perdiste, al menos lo intentaste"<<endl;
    }
    else {
    cout<<"\nFelicidades, adivinaste el numero\n";
    cout<<"Numero de intentos: "<<contador<<endl;
    }

    system("pause");
    return 0;
}
