
#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, respuesta=0;
    cout<<"Coloque un valor para a: "; cin>>a;
    cout<<"Coloque un valor para b: "; cin>>b;
    cout<<"Coloque un valor para c: "; cin>>c;
    cout<<"Coloque un valor para d: "; cin>>d;
    cout<<"Coloque un valor para e: "; cin>>e;
    cout<<"Coloque un valor para f: "; cin>>f;

    cout.precision(4);
    respuesta=(a+(b/c))/(d+(e/f));

    cout<<"\nLa respuesta kawai es: "<<respuesta<<endl;


    return 0;
}
