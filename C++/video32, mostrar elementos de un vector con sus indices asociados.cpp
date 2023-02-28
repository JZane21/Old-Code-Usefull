
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int numero[100], n=0;

    cout<<"Escriba el numero de elementos que va a tener el vector/arreglo: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Escriba otro numero: "; cin>> numero[i];//guardando los elementos del arreglo

    }
    //ahora, vamos a mostrar los elementos con sus indices asociados

    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<numero[i]<<endl;

    }

    getch ();
    return 0;
}
