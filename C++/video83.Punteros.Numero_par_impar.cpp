#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numero,*dirNum;

    cout<<"Escriba un numero: "; cin>>numero;
    dirNum=&numero;
    if(*dirNum%2==0){
        cout<<"El numero "<<*dirNum<<" es par"<<endl;
        cout<<"Posicion: "<<dirNum<<endl;
    }
    else{
        cout<<"El numero "<<*dirNum<<" es impar"<<endl;
        cout<<"Posicion: "<<dirNum<<endl;
    }

system("pause");
return 0;
}
