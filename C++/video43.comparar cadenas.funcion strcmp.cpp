
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra1[]="Hello";
    char palabra2[]="Hello";

    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas cadenas son iguales";
    }

    getch();
    return 0;

}
