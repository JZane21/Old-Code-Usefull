
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){

    int n, factorial = 1;

    cout<<"escriba un numero: "; cin>>n;

    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    cout<<"\nel factorial del numero es: "<<factorial<<endl;

    getch();
    return 0;
}
