
#include<iostream>
#include<stdlib.h>

using namespace std;

//prototipo de funcion
int encontrar_max(int x, int y);

int main(){
    int n1=0,n2=0;
    int mayor;
    cout<<"Escriba dos numeros: "; cin>>n1>>n2;

    mayor = encontrar_max(n1,n2);

    cout<<"El mayor de los dos numeros es: "<<mayor<<endl;

    system("pause");
    return 0;
}

//definicion de funcion
int encontrar_max(int x, int y){

    int numMax;
    if(x>y){
        numMax = x;
    }
    else{
        numMax = y;
    }

    return numMax;
}
