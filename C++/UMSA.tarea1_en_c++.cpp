#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n=0,d=0,m=0;
    int a=0,b=0,c=0;
    cout<<"n: "; cin>>n;
    while(n!=0){
        d=n%10;
        n=(n-(n%10))/10;
        m=m*10+d;
    }

    cout<<m<<endl;
    system("pause");
    return 0;
}
