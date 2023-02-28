#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numeros[10],*dirNum;

    for(int i=0;i<10;i++){
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>numeros[i];
    }

    dirNum=numeros;

    for(int i=0;i<10;i++){
        if(*dirNum%2==0){
            cout<<"El numero "<<*dirNum<<" es par"<<endl;
        }
        dirNum++;
    }

system("pause");
return 0;
}
