
#include <iostream>
using namespace std;
int main(){
    double x,y,z,v,extra;
    cout<<"coloque la nota del estudiante x = "; cin>>x;
    cout<<"coloque la nota del estudiante y = "; cin>>y;
    cout<<"coloque la nota del estudiante z = "; cin>>z;
    cout<<"coloque la nota del estudiante v = "; cin>>v;

   extra = (x+y+z+v)/2;

    cout.precision(3);
    cout<<"\nel promedio es = "<<extra<<endl;

    return 0;
}
