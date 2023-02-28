#include<iostream>
#include<stdlib.h>
using namespace std;

struct fecha{
    int day, month, year;
}f1,f2;

void pedirDatos();
void mayor(int, int, int);

int main(){
    pedirDatos();
    int x,y,z;
    mayor(x,y,z);

system("pause");
return 0;
}
void pedirDatos(){
    cout<<"Escriba la primera fecha:"<<endl;
    cout<<"Day: ";cin>>f1.day;
    cout<<"Month: ";cin>>f1.month;
    cout<<"Year: ";cin>>f1.year;
    cout<<"\nEscriba la segunda fecha:"<<endl;
    cout<<"Day: ";cin>>f2.day;
    cout<<"Month: ";cin>>f2.month;
    cout<<"Year: ";cin>>f2.year;
}
void mayor(int x, int y, int z){
    if(f2.year>=f1.year){
        if(f2.month>=f1.month){
            if(f2.day>=f1.day){
                x=f2.day;
                y=f2.month;
                z=f2.year;
                cout<<"\nLa segunda fecha es la mas reciente: "<<endl;
                cout<<x<<"/"<<y<<"/"<<z<<endl;
            }
            else if(f1.day>=f2.day){
                x=f1.day;
                y=f1.month;
                z=f1.year;
                cout<<"\nLa primera fecha es la mas reciente: "<<endl;
                cout<<x<<"/"<<y<<"/"<<z<<endl;
            }
        }
        else if(f1.month>=f2.month){
            x=f1.day;
            y=f1.month;
            z=f1.year;
            cout<<"\nLa primera fecha es la mas reciente: "<<endl;
            cout<<x<<"/"<<y<<"/"<<z<<endl;
        }
    }
    else if(f1.year>=f2.year){
        x=f1.day;
        y=f1.month;
        z=f1.year;
        cout<<"\nLa primera fecha es la mas reciente: "<<endl;
        cout<<x<<"/"<<y<<"/"<<z<<endl;
    }
}
