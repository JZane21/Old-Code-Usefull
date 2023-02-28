
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){

    int n, suma=1, resta=0, r=0;

    cout<<"escriba un numero: "; cin>>n;

    for(int i=1;i<=n;i++){
        suma *= (2*i-2);
        resta += (2*i-1);
        r += (suma+resta);
    }
        cout<<"\nel resultado es: "<<suma<<endl;

    getch();
    return 0;
}
