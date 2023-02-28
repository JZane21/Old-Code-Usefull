#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int numeros[]={1,2,3,4,5};
    int  *dirNum;

    dirNum = numeros;

    for(int i=0;i<5;i++){
        //cout<<"Elemento del vector ["<<i<<"]: "<<*dirNum++<<endl;
        cout<<"Posiciones de memoria "<<numeros[i]<<" es: "<<dirNum++<<endl;
    }

system("pause");
return 0;
}
