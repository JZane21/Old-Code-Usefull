/*programa para que lea la entrada estandar de dos n[umero
y muestre en una salida estandar su +, -, x, /
operaciones aritmeticas
*/

#include <iostream>

using namespace std;
// en todas las operaciones, hay que darles valor 0 para que no hayaninguna falla.
int main(){
    int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0; //si quieres poner muchas variables en una sola linea, solo separalas con coma.

    cout<<"Coloque un numero plox: "; cin>>n1; //dos expresiones en una linea es raro, pero mientras este el punto y coma, todo bien.
    cout<<"Coloque otro porfa: "; cin>>n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    //pa que me salgan resultados
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}


