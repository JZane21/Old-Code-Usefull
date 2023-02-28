#include<iostream>
using namespace std;
int suma=0;
void sum(int n){
    suma+=n;
    if(n>1){
        sum(n-1);
    }
}

void sum2(int n){
    for(int i=1;i<n;i++){
        suma += (n-i);
    }
}

int main(){
    int n;
    cout<<"Digite un numero: ";cin>>n;
    //sum(n);
    sum2(n);
    //suma = n*(n+1)/2;
    cout<<"La suma es: "<<suma<<endl;
}
