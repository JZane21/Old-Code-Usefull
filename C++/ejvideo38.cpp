
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[3][3];
    int numeros2[3][3];
    int n[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"escriba un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }

    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"escriba un numero X2 ["<<i<<"]["<<j<<"]: "; cin>>numeros2[i][j];
        }
    //cout<<"\n";
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[0][0]+numeros2[0][0];
        }
    cout<<"\n";
    }
    //1
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[0][1]+numeros2[0][1];
        }
    cout<<"\n";
    }
//2
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[0][2]+numeros2[0][2];
        }
    cout<<"\n";
    }
   //3
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[1][0]+numeros2[1][0];
        }
    cout<<"\n";
    }
//4
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[1][1]+numeros2[1][1];
        }
    cout<<"\n";
    }
   //5
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<numeros[1][2]+numeros2[1][2];
        }
    cout<<"\n";
    }
    //6
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<numeros[2][0]+numeros2[2][0];
        }
    cout<<"\n";
    }
    //7
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[2][1]+numeros2[2][1];
        }
    cout<<"\n";
    }
    //8
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros[2][2]+numeros2[2][2];
        }
    cout<<"\n";
    }

    getch();
    return 0;
}
