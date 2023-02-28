#include<iostream>
#include<stdlib.h>
using namespace std;

int potencia(int,int);

int main(){
    int base, exponente;

    cout<<"Escriba la base: ";cin>>base;
    cout<<"Escriba el exponente: ";cin>>exponente;

    cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;

system("pause");
return 0;
}
int potencia(int x, int y){
    int pot;

    if(y==1){
        pot=x;
    }
    else{
        pot=x*potencia(x,y-1);
    }
    return pot;
}
