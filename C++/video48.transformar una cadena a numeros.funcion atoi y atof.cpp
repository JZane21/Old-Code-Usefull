
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad[]="123.2945";
    float numero;

    //atoi es para trabajar con numeros enteros
    //atof es para trabajar con numeros decimales

    numero=atof(cad);

    cout<<numero<<endl;

    system("pause");
    return 0;
}
