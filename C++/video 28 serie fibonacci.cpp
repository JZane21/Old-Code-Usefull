/*
Recuerda samuel que sebes resolver el ej de este video y el del anterior...
*/
#include <conio.h>
#include <iostream>
using namespace std;
int main(){
    int n, x=0,y=1,z=1;

    cout<<"escriba un numero: "; cin>>n;
    cout<<"0 ";
    cout<<"1 ";
    for(int i=1;i<n;i++){
    z = x+y;
    cout<<z<<" ";
    x=y;
    y=z;
    }
    cout<<"\n";

    getch();
    return 0;
}
