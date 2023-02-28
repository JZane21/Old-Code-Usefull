#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float x=0,p=0,c=-1;

    do{
        cout<<"Escriba un numero diferente de 0 = "; cin>>x;
        c+=1;
        p+=x;
    }while((x<0)||(x>0));
    cout<<"\nLa suma de los numeros es: "<<p;
    cout<<"\nLa cantidad de numeros diferentes de 0 son: "<<c<<endl;
    cout<<"\n";
    system("pause");
return 0;
}
