#include <iostream>

using namespace std;

int main(){

    int n1, n2, n3, n4;

    cout<<"escriba cuatro numeros = "; cin>>n1>>n2>>n3>>n4;

    if (n4==n1){
    cout<<"el 4to numero coincide con el 1er numero";
    }
    else if(n4==n2) {
    cout<<"el 4to numero coincide con el 2do numero";
    }
    else if(n4==n3){
    cout<<"el 4to numero coincide con el 3er numero";

    }
    else {
    cout<<"no coincide con ningun numero ya antes escrito";
    }
    return 0;
}
