#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

template<class TIPOD>
void maximo(TIPOD dato);

int main(){
    int dato1 = 4;
    float dato2 = 15.6;
    double dato3 = 55.36352;

    if(dato1>(dato2&&dato3)){
        maximo(dato1);
        if(dato2>(dato1&&dato3)){
            maximo(dato2);
            if(dato3>(dato2&&dato1)){
                maximo(dato3);
            }
        }
    }

    system("pause");
    return 0;
}

template<class TIPOD>
void maximo(TIPOD dato){
    cout<<"El dato maximo es: "<<dato*dato<<endl;
}
