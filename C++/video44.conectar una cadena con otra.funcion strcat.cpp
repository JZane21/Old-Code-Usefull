
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char cad1[]="Esto ser cadena nice";
    char cad2[]=" de los ejemplos";
    char cad3[100];

    strcpy(cad3,cad1);

    strcat(cad3,cad2);

    cout<<cad3<<endl;

    system("pause");
    return 0;
}
