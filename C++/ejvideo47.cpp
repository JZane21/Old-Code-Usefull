
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad[20];
    char cad2[20];
    char cad3[]="A";

    cout<<"Escriba su primer o segundo nombre: "; cin.getline(cad,20,'\n');
    cout<<"Escriba la inicial del nombre que escribio anteriormente: "; cin.getline(cad2,20,'\n');

    if(strcmp(cad2,cad3)==0){
        strlwr(cad);
        cout<<"Como su nombre empieza con a, pasaremos su nombre a minusculas: "<<cad<<endl;
    }
    else{
        cout<<"Como su nombre no empieza con a, no pasaremos su nombre a minusculas: "<<cad<<endl;
    }

    system("pause");
    return 0;
}
