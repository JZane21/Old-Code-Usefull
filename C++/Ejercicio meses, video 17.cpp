#include <iostream>

using namespace std;

int main(){
    int mes;

    cout<<"escriba un numero del 1 al 12 para ver de que mes se trata = "; cin>>mes;

    switch(mes){
        case 1: cout<<"se refiere al mes de Enero";break;
        case 2: cout<<"se refiere al mes de Febrero";break;
        case 3: cout<<"se refiere al mes de Marzo";break;
        case 4: cout<<"se refiere al mes de Abril";break;
        case 5: cout<<"se refiere al mes de Mayo";break;
        case 6: cout<<"se refiere al mes de Junio";break;
        case 7: cout<<"se refiere al mes de Julio";break;
        case 8: cout<<"se refiere al mes de Agosto";break;
        case 9: cout<<"se refiere al mes de Septiembre";break;
        case 10: cout<<"se refiere al mes de Octubre";break;
        case 11: cout<<"se refiere al mes de Noviembre";break;
        case 12: cout<<"se refiere al mes de Diciembre";break;
      default: cout<<"tarad@, no escribio lo que se le pidio, capaz una letra >:v";break;
    }
    }
