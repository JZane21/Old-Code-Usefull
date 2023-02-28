
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra1[100];
    char palabra2[100];

    cout<<"Escriba una palabra(todo en minusculas): "; cin.getline(palabra1,100,'\n');
    cout<<"Escriba otra palabra(todo en minusculas): "; cin.getline(palabra2,100,'\n');

    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas cadenas son iguales";
    }
    else if(strcmp(palabra1,palabra2)!=0){
        if(strcmp(palabra1,palabra2)<0){
            cout<<"la palabra 1 tiene mas letras que la palabra 2";
        }
        else{
            cout<<"la palabra 2 tiene mas letras que la palabra 1";
        }
    }

    getch();
    return 0;
}
