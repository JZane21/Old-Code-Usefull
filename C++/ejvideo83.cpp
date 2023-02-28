#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num=0,primo=0,con=0,*dirNum;

    cout<<"Escriba un numero: ";cin>>num;

    for(int i=1;i<=num;i++){
        primo=num%i;
        if(primo!=0){
            con++;
        }
    }
    if(con==(num-2)){
        dirNum=&num;
        cout<<"\nSi es un numero primo"<<endl;
        cout<<"Numero: "<<*dirNum<<endl;
        cout<<"Posicion: "<<dirNum<<endl;
    }
    else{
        cout<<"\nNo es un numero primo"<<endl;
    }

    cout<<"\n";

system("pause");
return 0;
}
