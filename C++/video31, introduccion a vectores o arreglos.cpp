
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){
    int numero[] = {1,2,3,4,5};
    int suma = 1;

    for(int i=0; i<5; i++){
        suma *= numero[i];

    }
    cout<<"El producto de los elementos del vector es: "<<suma<<endl;

    getch();
    return 0;
}
