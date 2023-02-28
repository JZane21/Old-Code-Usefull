
/*
Intercambio de valores entre dos variables, como por ejemplo:
de x=10 y=5
a x=5 y=10
*/
#include<iostream>

using namespace std;
int main(){
    int x,y,aux;
    cout<<"coloque el valor de x: ";cin>>x;
    cout<<"coloque el valor de y: ";cin>>y;

    aux=x;
    x=y;
    y=aux;

    cout<<"\nel nuevo valor de x es: "<<x<<endl;
    cout<<"el nuevo valor de y es: "<<y<<endl;

    return 0;
}
