#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){

    int n1;

    do{
    cout<<"Escriba un numero del 1 al 10 = "; cin>>n1;
    cout<<n1<<endl;

    }while((n1<1)||(n1>10));

    for(int i=1; i<=20; i++){

        cout<<n1<<" * "<<i<<" = "<<n1*i<<endl;


    }
    getch();
    return 0;
}
