//atoi es para trabajar con numeros enteros
//atof es para trabajar con numeros decimales
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad[100];
    char cad2[100];
    int n1;
    double n2;

    cout<<"Escriba un numero entero: "; cin.getline(cad,100,'\n');
    cout<<"Escriba un numero real: "; cin.getline(cad2,100,'\n');

    n1=atoi(cad);
    n2=atof(cad2);

    system("pause");

    cout<<"\nLa suma es: "<<n1+n2<<endl;

    system("pause");
    return 0;
}

