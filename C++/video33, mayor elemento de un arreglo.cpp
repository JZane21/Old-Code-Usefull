
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int numero[100], n, mayor=0;

    cout<<"escriba el numero de elementos de arreglo: "; cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". Escriba un numero: "; cin>>numero[i];

        if(numero[i]>mayor){
            mayor = numero[i];
        }
    }
    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;

    getch();
    return 0;
}
