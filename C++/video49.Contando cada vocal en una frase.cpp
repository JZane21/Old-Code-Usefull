
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char frase[30];
    int va = 0,ve = 0,vi = 0,vo = 0,vu = 0;

    cout<<"Escriba una frase: "; cin.getline(frase,30,'\n');

    for(int i=0;i<30;i++){
        switch(frase[i]){
            case 'a': va++; break;
            case 'e': ve++; break;
            case 'i': vi++; break;
            case 'o': vo++; break;
            case 'u': vu++; break;
        }
    }

    cout<<"Vocal a: "<<va<<endl;
    cout<<"Vocal e: "<<ve<<endl;
    cout<<"Vocal i: "<<vi<<endl;
    cout<<"Vocal o: "<<vo<<endl;
    cout<<"Vocal u: "<<vu<<endl;

    system("pause");
    return 0;
}
