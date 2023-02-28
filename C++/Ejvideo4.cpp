#include <iostream>
using namespace std;
int main(){
    float pr1,pr2,pr3,pr4,pr5,pr6,pr7,pr8,pr9,pr10, IVA = 0.18;
    float suma = 0;
    cout<<"\nhola, recordatorio de que solo puede colocar 10 precios como maximo"<<endl;
    cout<<"\nColoque el precio de su producto: ";cin>>pr1;
    cout<<"\nColoque otro precio de otra compra si lo tiene: ";cin>>pr2;
    cout<<"\nX2 del anterior mensaje: ";cin>>pr3;
    cout<<"\nX3 del anterior mensaje: ";cin>>pr4;
    cout<<"\nX4 del anterior mensaje: ";cin>>pr5;
    cout<<"\nX5 del anterior mensaje: ";cin>>pr6;
    cout<<"\nX6 del anterior mensaje: ";cin>>pr7;
    cout<<"\nX7 del anterior mensaje: ";cin>>pr8;
    cout<<"\nX8 del anterior mensaje: ";cin>>pr9;
    cout<<"\nX9 del anterior mensaje: ";cin>>pr10;

    suma = ((pr1 * IVA) + pr1) + ((pr2 * IVA) + pr2) + ((pr3 * IVA) + pr3) +
            ((pr4 * IVA) + pr4) + ((pr5 * IVA) + pr5) + ((pr6 * IVA) + pr6) +
            ((pr7 * IVA) + pr7) + ((pr8 + IVA) + pr8) + ((pr9 * IVA) + pr9) + ((pr10 * IVA) + pr10);
    cout<<"\nLa suma de la compra total es de: "<<suma;

    return 0;
}
