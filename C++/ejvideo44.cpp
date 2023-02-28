
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad1[]="Hola, como estas ";
    char cad2[100];
    char cad3[100];

    strcpy(cad3,cad1);

        cout<<"Escribe tu nombre bon amigo: "; cin.getline(cad2,100,'\n');

    strcat(cad3,cad2);

        cout<<cad3<<endl;

    system("pause");
    return 0;
}
