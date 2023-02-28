#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int n=0,a=1,b=0,c=0;
    cout<<"\nn: ";cin>>n;
    for(int i=1;i<=n;i++){
        c=c+a;
        a=a*3;
        b=b+1;
        if(b==2){
            a=a+3;
            b=b-b;
        }
    }
    cout<<"\n";
    cout<<c<<endl;
system("pause");
return 0;
}
