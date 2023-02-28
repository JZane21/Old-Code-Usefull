#include<iostream>
#include<stdlib.h>//esto hace posible la declaracion de arrays dinamicos
using namespace std;

void pedirNotas();
void mostrarNotas();

int numClaif,*calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif;//liberando espacio en bytes utilizados anteriormente

system("pause");
return 0;
}
void pedirNotas(){
    cout<<"Digite un numero de calificaciones: ";
    cin>>numClaif;

    calif = new int[numClaif];//crear el arreglo

    for(int i=0;i<numClaif;i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }

}
void mostrarNotas(){
    cout<<"\nMostrando notas del usuario:\n";
    for(int i=0;i<numClaif;i++){
        cout<<calif[i]<<endl;
    }
}
