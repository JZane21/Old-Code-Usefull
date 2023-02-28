
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad[100];
    char cad2[100];

    cout<<"Escriba una palabra(en minusculas): "; cin.getline(cad,100,'\n');
    cout<<"Escriba la misma palabra(en minusculas): "; cin.getline(cad2,100,'\n');

    strrev(cad2);
    if(strcmp(cad,cad2)!=0){
        cout<<"la palabra no es polindroma"<<endl;
    }
    else if(strcmp(cad,cad2)==0){
        cout<<"la palabra si es polindroma"<<endl;
    }

    system("pause");
    return 0;
}
