
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[3][3] = {1,2,3 , 4,5,6 , 7,8,9};
    int otra[3][3];


    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            cout<<(otra[i][j] = numeros[0][0]);
        }
        cout<<"\n";
    }

    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            cout<<" "<<(otra[i][j] = numeros[1][1]);
        }
        cout<<"\n";
    }

    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            cout<<"  "<<(otra[i][j] = numeros[2][2]);
        }
        cout<<"\n";
    }

    /*
    cout<<numeros[0][0] = 1
    cout<<numeros[0][1] = 2
    cout<<numeros[0][2] = 3
    cout<<"\n";
    cout<<numeros[1][0] = 4
    cout<<numeros[1][1] = 5
    cout<<numeros[1][2] = 6
    cout<<"\n";
    cout<<numeros[2][0] = 7
    cout<<numeros[2][1] = 8
    cout<<numeros[2][2] = 9
    */

    getch();
    return 0;
}
