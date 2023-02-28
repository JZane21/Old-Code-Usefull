
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
int main(){

double a, b, c, r, r2, r3;

    cout<<"escriba una letra para ax^2: "; cin>>a;
    cout<<"escriba una letra para bx: "; cin>>b;
    cout<<"escriba una letra para c: "; cin>>c;
    r = sqrt(pow(b,2)-4*a*c);
    r2 = (-b+r)/2*a;
    r3 = (-b-r)/2*a;

cout<<"\nlos resultados son: "<<r2;
cout<<"\nlos resultados son: "<<r3;
    getch();
    return 0;
}
