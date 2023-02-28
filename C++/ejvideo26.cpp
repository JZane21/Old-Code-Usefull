
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){

    int n, factorial = 1, suma=0;

    cout<<"escriba un numero: "; cin>>n;

    for(int i=1;i<=n;i++){
        factorial *= i;
        suma+=factorial;
    }
    cout<<"\nela suma de los factoriales es: "<<suma<<endl;
    getch();
    return 0;
}
