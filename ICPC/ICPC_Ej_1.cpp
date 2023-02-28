#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<sstream>
//#include <bits/stdc++.h>
using namespace std;
int main(){
    string primerNumero, segundoNumero;
    unsigned int numero1 = 0, numero2 = 0;
    /*unsigned es para tener valores positivos
    desde 0 al infinito o al limite*/
while(true){
    cout<<"Digite un numero: "; cin>>primerNumero;
    cout<<"\nDigite otro numero: "; cin>>segundoNumero;
    if(primerNumero == "EOF" ||  segundoNumero == "EOF"){
        break;
    }
    istringstream(primerNumero) >> numero1;
    istringstream(segundoNumero) >> numero2;
    cout<<"\nsalida: "<<(numero1^numero2)<<endl;
    /*el signo de arriba es para los bits
    xor*/
    system("pause");
}

return 0;
}
