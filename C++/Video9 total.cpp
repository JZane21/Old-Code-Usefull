 #include <iostream>
 #include <math.h> //esta es la biblioteca para hacer calculo con mate
//sqrt = raiz cuadrada
//pow = potencia, solo que hay qye poner una coma y hasta donde queremos elevarlo. ej: pow (x,2)
 using namespace std;
 int main(){
    float cateto1, cateto2, cateto11, cateto22, hipotenusa = 0;

    cout<<"escriba el valor del cateto1 = "; cin>>cateto1;
    cout<<"escriba el valor del cateto2 = "; cin>>cateto2;

    cateto11 = pow(cateto1,2);
    cateto22 = pow(cateto2,2);

    hipotenusa = sqrt(cateto11+cateto22);

    cout<<"\nla hipotenusa es = "<<hipotenusa;

    return 0;
 }
