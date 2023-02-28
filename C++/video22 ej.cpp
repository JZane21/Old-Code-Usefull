
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){

    double n1;

    do{
    cout<<"escriba un numero diferente de cero y con 5 decimales maximo = ";cin>>n1;
    cout<<n1<<endl;

    }while((n1<0)||(n1>0));
    if(n1==0){

    cout<<"Usted a escrito cero, por lo que el programa termino";

    }
    getch();
    return 0;
}
