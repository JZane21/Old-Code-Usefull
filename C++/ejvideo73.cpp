#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int vectore(int vec[]);

int main(){
    int vec[]={2,4,1,6,7,4,6,8,3};
    vectore(vec);

system("pause");
return 0;
}
int vectore(int vec[]){
    for(int i=0;i<9;i++){
        if(vec[i]>vec[i+1]){
            cout<<"No-NNN"<<endl;
        }
        else{
            cout<<"Si-SSSSSSS"<<endl;
        }
    }
    cout<<"\nSi hay un 'Si', pues significa que si es ascendente\n";
    cout<<"Si hay un 'Si', pues significa que si es ascendente\n";
}
