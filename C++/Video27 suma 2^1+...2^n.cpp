
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){
    int suma=0, elevacion=0, n;

    cout<<"escriba la cantidad de numeros a sumar: "; cin>>n;
    for(int i=1; i<=n; i++){
        elevacion = pow(2,i);
    suma += elevacion;
    }
    cout<<"\nel resultado es: "<<suma<<endl;

    getch();
    return 0;
}
