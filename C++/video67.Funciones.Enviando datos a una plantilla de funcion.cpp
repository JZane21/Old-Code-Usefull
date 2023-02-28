#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

template<class TIPOD>
void despliegue(TIPOD dato);

int main(){
    int dato1 = 4;
    float dato2 = 15.6;
    double dato3 = 3255.36352;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    system("pause");
    return 0;
}

template<class TIPOD>
void despliegue(TIPOD dato){
    cout<<"El dato es: "<<dato<<endl;
}
