#include<iostream>
using namespace std;
/*
void bucles(int a){

    int a,sum=0;
    cin>>a;
    int i=0;
    for(int i=1;sum<a;){
        cout<<i<<" ";
        sum += i;
    }
    return 0;

}

void mayorMenor(){
    int a=9;
    int b=7;
    int dif = (a-b)*((2*(a-b)+1)%2);
    int max =

}
*/
void reverso(){

    string palabra;
    int suma,suma2;
    cin>>palabra;
    for(int i=0; i<palabra.size();i++){
        switch(palabra[i]){
            case 'a':
                suma++;
                break;
            case 'e':
                suma++;
                break;
            case 'i':
                suma++;
                break;
            case 'o':
                suma++;
                break;
            case 'u':
                suma++;
                break;
            default:
                suma2++;
        }
    }
    cout<<suma<<endl;
}

int main(){
    /*
    int n,aux;
    cin>>n;
    int cadena [n];
    for(int i=0;i<n;i++){
        cin>>cadena[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(cadena[i]>cadena[j]){
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }
    cout<<cadena[n-1]<<endl;
    cout<<cadena[0]<<endl;

    return 0;
    */

    char letra;
    int a,b,operacion;
    cout<<"seleccione la operacion: \n";
    cout<<"suma: s"<<endl;
    cout<<"resta: r"<<endl;
    cout<<"multiplicacion: m"<<endl;
    cout<<"division: d"<<endl;
    cin>>letra;
    cout<<"digite dos numeros a operar: ";
    cin>>a>>b;
    switch(letra){
    case 's':
        operacion = a+b;
        cout<<a<<"+"<<b<<endl;
        break;
    case 'r':
        operacion = a-b;
        cout<<a<<"-"<<b<<endl;
        break;
    case 'm':
        operacion = a*b;
        cout<<a<<"*"<<b<<endl;
        break;
    case 'd':
        operacion = a/b;
        cout<<a<<"/"<<b<<endl;
        break;
    }
    cout<<"La operacion resultante es: "<<operacion<<endl;

    return 0;
}
