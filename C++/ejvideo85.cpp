#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numeros[100],*dirNum,n,aux;
    cout<<"Digite el numero de elementos: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>numeros[i];
    }
    dirNum=numeros;
    for(int i=0;i<n;i++){
        if(numeros[i]>numeros[i+1]){
            aux=numeros[i+1];
            numeros[i+1]=numeros[i];
            numeros[i]=aux;
        }
    }
    cout<<"\nEl numero mas enano es: "<<numeros[1]<<endl;

system("pause");
return 0;
}
