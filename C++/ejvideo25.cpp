#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){
int n, suma=0, a1, a2, a3;
    cout<<"Escriba el numero de elementos: "; cin>>n;
    //for(int i=1;i<=n;i++){
        a1=1;
        do{
        a2=1;
            do{
            a3=a1%a2;
        if(a3==0){
            suma++;
        }
            a2++;
            }while(a2<=a1);
        if(suma<=2){
            cout<<"\nEste es un numero primo"<<endl;
            n--;
        }
         else{
           cout<<"\nEste NO es un numero primo"<<endl;
        }
        a1++;
        }while(n=0);
    //}
    getch();
    return 0;
}
