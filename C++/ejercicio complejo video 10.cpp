 #include <iostream>
 #include <math.h>
 #include <conio.h>
//samuel, por reglas de la matem[atica, no se puedeeeeee
//olvida lo anterior, si se puede
 using namespace std;
 int main(){
    double a ;
    double b ;
    double c ;
    double r1;
    double t1;
    double p1;
    double x1;
    double t2;
    double e1;
    double valor2;
    double valor;

    cout<<"escriba el valor de a = "; cin>>a;
    cout<<"escriba el valor de b = "; cin>>b;
    cout<<"escriba el valor de c = "; cin>>c;

    //valor1 = (((-b) + (sqrt(pow(b,2)-(4*a*c))))/(2*a));
    //valor2 = (((-b) - (sqrt(pow(b,2)-(4*a*c))))/(2*a));

    r1 = b*b;
    p1 = (4*a*c);
    e1 = r1-p1;
    x1 = sqrt(e1);
    t1 = ((-b)+(x1));
    t2 = ((-b)-(x1));
    valor = t1/(2*a);
    valor2 = t2/(2*a);


    cout<<"\nel valor1 es = "<<valor<<endl;
    cout<<"\nel valor2 es = "<<valor2<<endl;
    getch();
    return 0;
 }
