#include <iostream>
using namespace std;
int main(){
 int x,y,extra;
  cout<<"coloque el valor de X = "; cin>>x;
  cout<<"ponga el valor de y = "; cin>>y;

  extra = x;
  x = y;
    y = x;
    cout<<"\nel nuevo valor de x es = "<<x<<endl;
    cout<<"\nel nuevo valor de y es = "<<y<<endl;

    return 0;
}
