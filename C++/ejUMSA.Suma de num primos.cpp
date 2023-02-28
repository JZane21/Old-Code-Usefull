
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){
    int na=0,suma=0, mod=0, n;

    cout<<"escriba la cantidad de numeros primos a sumar: "; cin>>n;
    for(int a=1; a<=n; a++){
        int aux=0;
        for(int div=1;div<=a;div++){
            if(a%div==0 && a%1==0){
                aux++;
            }
            if(aux==2){
                cout<<a<<endl;
                suma+=a;
            }
        }
    }

    getch();
    return 0;
}
/*
#include<iostream>

using namespace std;

int main(){

    int n=0, a=0, b=1, c=1;

    cout<<"Digite un numero: "; cin>>a;
    cout<<"Digite una potencia: "; cin>>n;

        while(b<=n){
            c*=a;
            b++;
        }

    cout<<"\nLa potencia es: "<<c<<endl;
    system("pause");
    return 0;
}

*/
