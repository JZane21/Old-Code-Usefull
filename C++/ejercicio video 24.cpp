#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
    int x,y,resultado=1,a,i=1;
    cout<<"Este programa consistira en realizar una potencia"<<endl;
    cout<<"\nEscriba un numero: ";cin>>x;
    cout<<"Escriba la potencia: ";cin>>y;

    while(i<=y){
     resultado *= x;
     i++;
    }
    cout<<"/nel resultado es: "<<resultado<<endl;
getch();
return 0;
}
