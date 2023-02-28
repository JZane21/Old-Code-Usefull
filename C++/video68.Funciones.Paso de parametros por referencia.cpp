#include<iostream>
#include<stdlib.h>
using namespace std;
void valNuevo(int&, int&);
int main(){
    int num1,num2;
    cout<<"\nEscriba dos numeros: "; cin>>num1>>num2;

    valNuevo(num1,num2);

    system("pause");
    return 0;
}
void valNuevo(int& xnum, int& ynum){
    cout<<"\nEl valor del primer numero es: "<<xnum<<endl;
    cout<<"\nEl valor del segundo numero es: "<<ynum<<endl;
    xnum = 34;
    ynum = 45;
    cout<<"\nEl nuevo valor del primer numero es: "<<xnum<<endl;
    cout<<"\nEl nuevo valor del segundo numero es: "<<ynum<<endl;
}
