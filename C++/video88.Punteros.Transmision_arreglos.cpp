#include<iostream>
#include<stdlib.h>
using namespace std;

int hallarMax(int *,int);

int main(){
 const int nElementos=5;
 int numeros[5]={3,5,2,8,1};

    cout<<"El elemento mayor es: "<<hallarMax(numeros,nElementos)<<endl;

system("pause");
return 0;
}
int hallarMax(int *dirVec,int nElementos){
    int max=0;

    for(int i=0;i<nElementos;i++){
        if(*(dirVec+i)>max){
            max=*(dirVec+i);
        }
    }
    return max;
}
