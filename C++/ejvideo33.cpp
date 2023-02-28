
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int numero[100], n, suma=0;
    bool sino=false;

    cout<<"escriba el numero de elementos de arreglo: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". Escriba un numero: "; cin>>numero[i];
    suma += numero[i];
    }

    for(int i=0;i<n;i++){
    if(numero[i]==suma/2){
        sino = true;
        cout<<"\nEl numero de la posicion "<<i<<" del arreglo es igual a la suma de los elementos restantes"<<endl;
        }
    }
    if(sino==false){
        cout<<"\nNingun elemento de este arreglo es igual a la suma de los elementos restantes."<<endl;
    }
    cout<<"\n";
    getch();
    return 0;
}
