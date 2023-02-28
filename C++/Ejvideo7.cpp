
#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, resultado=0;
    cout<<"Coloque un numero para a: "; cin>>a;
    cout<<"Coloque un numero para b: "; cin>>b;
    cout<<"Coloque un numero para c: "; cin>>c;
    cout<<"Coloque un numero para d: "; cin>>d;

    cout.precision(4);

    resultado=a+(b/(c-d));
    cout<<"\nLa respuesta es: "<<resultado<<endl;

    return 0;
}
