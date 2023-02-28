
#include <iostream>

using namespace std;

int main(){

    double number;
// numero%2 quiere decir el reciduo de la division
    cout<<"escriba un numero = "; cin>>number;

    if(number>0){
        cout<<"el numero es positivo";

    }
    else if(number<0){
        cout<<"el numero es negativo";
    }
    else {
        cout<<"el numero es igual a cero";
    }

    return 0;
}
