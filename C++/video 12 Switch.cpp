//aqui vamos a utilizar switch
#include <iostream>
 using namespace std;
 int main(){
    int number;

    cout<<"escriba un numero del 1 al 10 = ";cin>>number;

    switch(number){

    case 1: cout<<"Escribio el numero 1";break;
    case 2: cout<<"Escribio el numero 2";break;
    case 3: cout<<"Escribio el numero 3";break;
    case 4: cout<<"Escribio el numero 4";break;
    case 5: cout<<"Escribio el numero 5";break;
    case 6: cout<<"Escribio el numero 6";break;
    case 7: cout<<"Escribio el numero 7";break;
    case 8: cout<<"Escribio el numero 8";break;
    case 9: cout<<"Escribio el numero 9";break;
    case 10: cout<<"Escribio el numero 10";break;
    default: cout<<"No Escribio un number entre 1 y 10";break;

    }

    return 0;
 }
