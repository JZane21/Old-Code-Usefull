#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){

    int temperaturapromedio, temperaturamasalta, temperaturamasbaja;

    for(int i=4;i<=24;i++ ){

    temperaturapromedio = i;
    temperaturamasalta = i + 10;
    temperaturamasbaja = i - 30;

    }
    cout<<"la temperatura general es: "<<temperaturapromedio<<endl;
    cout<<"la temperatura mas alta del dia es: "<<temperaturamasalta<<endl;
    cout<<"la temperatura mas baja del dia es: "<<temperaturamasbaja<<endl;

return 0;
getch();
}
