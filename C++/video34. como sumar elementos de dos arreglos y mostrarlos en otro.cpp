
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[]={'k','l','m','n','o'};
    char letras4[15];

    for(int i=0;i<5;i++){
        letras4[i]=letras1[i];
    }

    for(int i=5;i<10;i++){
        letras4[i]=letras2[i-5];
    }

    for(int i=10;i<15;i++){
        letras4[i]=letras3[i-10];
    }

    for(int i=0;i<15;i++){
        cout<<letras4[i]<<endl;
    }

    getch();
    return 0;
}
