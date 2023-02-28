#include <iostream>

using namespace std;
int main(){

    int numero, dato = 5;
    cout<<"escriba un numero del 1 al 10 = "; cin>>numero;
    if (numero>=dato){
        cout<<"\nel numero es mayor o igual a 5"<<endl;

    }
    else{
        cout<<"\nel numero es menor a 5"<<endl;
    }
/*
un solo igual es el operador de asignacion, mientras que dos son el condicional
si colocamos != quiere decir, diferente de
>, mayo o menor que
>=, mayor o igual
<,menor a
<=, menor o igual a
*/
    return 0;
}
