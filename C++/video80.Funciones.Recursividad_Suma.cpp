
#include<iostream>
#include<stdlib.h>
using namespace std;

int sumar(int);

int main(){
    int nElementos;

    do{
        cout<<"Digite un numero de elementos: ";
        cin>>nElementos;
    }while(nElementos<=0);

    cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;

system("pause");
return 0;
}

int sumar(int n){
    int suma = 0;
    if(n==1){
        suma=1;
    }
    else{
        suma=n+sumar(n-1);
    }
    return suma;
}
