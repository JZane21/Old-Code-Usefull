
#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, answer = 0;
    cout<<"Coloque un valor para a: "; cin>>a;
    cout<<"Coloque un valor para b: "; cin>>b;
    cout<<"Coloque un valor para c: "; cin>>c;
    cout<<"Coloque un valor para d: "; cin>>d;

    answer = (a+b)/(c+d);

    cout.precision(4);
    cout<<"\nEl resultado es: "<<answer<<endl;
    return 0;
}
