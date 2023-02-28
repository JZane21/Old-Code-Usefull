
#include<iostream>
using namespace std;
int main(){
    float a,b, resultant = 0;

    cout<<"coloque el valor de a: ";cin>>a;
    cout<<"coloque el valor de b: ";cin>>b;

    resultant = (a/b)+4;//ponemos la operacion que queramos

    cout.precision(3); //es para decir al programa a cuantos decimales quieres redondear
    cout<<"\nla resultante es: "<<resultant<<endl;
    return 0;
}

