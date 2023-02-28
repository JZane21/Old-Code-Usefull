
#include<iostream>
#include<stdlib.h>

using namespace std;

//prototype
template<class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.87;
    double num3 = -123.76583;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);


    system("pause");
    return 0;
}
//TIPOD = int, float, double
template<class TIPOD>
//void no retorna nada
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero*=-1;
    }

    cout<<"El valor absoluto del numero es: "<<numero<<endl;

}
