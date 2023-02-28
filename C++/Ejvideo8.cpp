#include<iostream>

using namespace std;
int main(){
    float a,b,c,d,aux,promedio;
    cout<<"coloque el valor de a: ";cin>>a;
    cout<<"coloque el valor de b: ";cin>>b;
    cout<<"coloque el valor de c: ";cin>>c;
    cout<<"coloque el valor de d: ";cin>>d;

    aux=a+b+c+d;
    promedio=aux/4;
    cout.precision(4);

    cout<<"\nel promedio es: "<<promedio<<endl;

    return 0;
}

