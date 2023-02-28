
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
    int numero [100],n,n1;

    cout<<"Escriba un numero de elementos que va a tener el arreglo: "; cin>>n;
    n1=n-1;
    for(int i=n1;i>=0;i--){
        cout<<"escriba un numero: "; cin>>numero[i];
    }
    for(int i=n1;i>=0;i--){
        cout<<i<<" -> "<<numero[i]<<endl;
    }

    getch();
    return 0;
}
