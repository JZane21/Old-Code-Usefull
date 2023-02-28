
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(){

int numero, pf1, pf2, pf3, pf4;
cout<<"escriba un numero: "; cin>>numero;

    pf1 = numero / 2;
    pf2 = numero / 3;
    pf3 = numero / 5;
    pf4 = numero / 7;
    if((numero%2)==0){
        cout<<pf1<<" * "<<2<<" = "<<numero<<endl;
    }
    else{
        cout<<numero<<" * "<<1<<" = "<<numero<<endl;
    }
    if((numero%3)==0){
        cout<<pf2<<" * "<<3<<" = "<<numero<<endl;
    }
    else{
        cout<<numero<<" * "<<1<<" = "<<numero<<endl;
    }
    if((numero%5)==0){
        cout<<pf3<<" * "<<5<<" = "<<numero<<endl;
    }
    else{
        cout<<numero<<" * "<<1<<" = "<<numero<<endl;
    }
    if((numero%7)==0){
        cout<<pf4<<" * "<<7<<" = "<<numero<<endl;
    }
    else{
        cout<<numero<<" * "<<1<<" = "<<numero<<endl;
    }
    system("pause");
    return 0;
}
