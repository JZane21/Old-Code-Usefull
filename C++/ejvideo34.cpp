#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int letras1[100];
    int letras2[100];
    int n;

    cout<<"Escriba el numero de letras que tendra el vector (maximo como 26): "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEscriba un numero: "; cin>>letras1[i];
    }

    for(int i=0;i<n;i++){
        letras2[i]=letras1[i]*2;
    }

    for(int i=0;i<n;i++){
        cout<<letras2[i]<<endl;
    }

    getch();
    return 0;
}
