
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char palabra[50];
    char palabra2[50];

    cout<<"Escriba una palabra en minusculas: "; cin.getline(palabra,50,'\n');
    cout<<"Escriba otra palabra en minusculas: "; cin.getline(palabra2,50,'\n');

    strupr(palabra);
    strupr(palabra2);

    cout<<palabra<<endl;

    cout<<palabra2<<endl;

    system("pause");

    if(strcmp(palabra,palabra2)==0){
        cout<<"\nAmbas palabras son iguales"<<endl;
    }
    else{
        cout<<"\nAmbas palabras son diferentes"<<endl;
    }


    system("pause");
    return 0;
}
