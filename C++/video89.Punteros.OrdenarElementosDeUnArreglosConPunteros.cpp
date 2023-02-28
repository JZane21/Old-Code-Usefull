#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarArreglo(int *,int);
void mostrarArreglo(int *, int);

int nElementos,*elemento;

int main(){
    pedirDatos();
    ordenarArreglo(elemento,nElementos);
    mostrarArreglo(elemento,nElementos);

    delete[] elemento;//liberar memoria utilizada para el arreglo dinamico

system("pause");
return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del Arreglo: ";
    cin>>nElementos;

    elemento = new int[nElementos];//crear el arreglo dinamico
    for(int i=0;i<nElementos;i++){
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>*(elemento+i);//elemento[i]
    }

}

void ordenarArreglo(int *elemento,int nElementos){
    int aux=0;
    //ordenamiento por el metodo burbuja
    for(int i=0;i<nElementos;i++){
        for(int j=0;j<nElementos-1;j++){
            if(elemento[j] > elemento[j+1]){
                aux=elemento[j];
                elemento[j]=elemento[j+1];
                elemento[j+1]=aux;
            }
        }
    }
}

void mostrarArreglo(int *elemento,int nElementos){
    cout<<"\n\nMostrando arreglo ordenado: ";
    for(int i=0;i<nElementos;i++){
        cout<<elemento[i]<<" ";
    }
    cout<<"\n\n";
}
