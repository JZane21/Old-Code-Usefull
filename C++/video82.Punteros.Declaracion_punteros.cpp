#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num,*dirNum;
    num=20;
    dirNum=&num;

    cout<<"Numero: "<<*dirNum<<endl;
    cout<<"Direccion de memoria: "<<dirNum<<endl;


system("pause");
return 0;
}
