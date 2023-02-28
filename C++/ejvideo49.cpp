
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char frase[50];
    char frase2[50];
    int va = 0,ve = 0,vi = 0,vo = 0,vu = 0;
    char broma[]="-buena-broma-";

    cout<<"Escriba una frase: "; cin.getline(frase,50,'\n');
    cout<<"\n";
    cout<<"Escriba la misma frase: "; cin.getline(frase2,10,'\n');
    cout<<"\n";

        strcat(frase2,broma);

    cout<<"\nMostrando: "<<frase<<endl;
    cout<<"MostrandoX2: "<<frase2<<endl;

    system("pause");
    return 0;
}
