
#include<iostream>
#include<stdlib.h>
using namespace std;

int factorial(int);

int main(){
    cout<<"\nFactorial: "<<factorial(5)<<endl;


system("pause");
return 0;
}

int factorial(int n){
    if(n==0){
        n=1;
    }
    else{
        n=n*factorial(n-1);
    }
    return n;
}
