#include<iostream>
#include<stdlib.h>
using namespace std;

int serie(int);

int main(){
    int nel;
    do{
        cout<<"Escriba un numero positivo: ";
        cin>>nel;
    }while(nel<=0);
    cout<<serie(nel)+1;
    cout<<"\n";

system("pause");
return 0;
}
int serie(int n){
    int x=1,y=1,z=0;
    if(n==1){
        z=1;
    }
    else{
        z=n+serie(n-1);
        x=y;
        y=z;
        z=x+y;
    }
    return z;
}
