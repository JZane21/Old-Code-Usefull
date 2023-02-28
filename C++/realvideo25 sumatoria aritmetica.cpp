
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){

int n, suma=0;

    cout<<"Escriba el numero de elementos: "; cin>>n;

    for(int i=10;i<=n;i++){
        suma += i;
    }
    cout<<"\nla sumatoria es: "<<suma<<endl;
    getch();
    return 0;
}
