
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    char palabra[] = "Samuel";
    char palabra2[] = {'S','a','m','u','e','l'};
    char nombre[20];

    cout<<"Escriba su nombre: ";
    //gets(nombre); guarda un cantidad ilimitada de cadenas de caracteres, y eso no siempre es bueno
    //cin>>nombre; seria lo mas logico, pero como aveces que remos colocar caracteres tipo que esten separados
    //no se va a poder
    cin.getline(nombre,20,'\n');//es mejor usar esta opcion, porque es ideal

    cout<<nombre<<endl;

    getch();
    return 0;
}
