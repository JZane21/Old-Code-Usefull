
#include <iostream>

using namespace std;

int main(){
    char letra;
    cout<<"escriba una letra = ";cin>>letra;

    switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"Es una vocal minuscula";break;
    case 'q':
    case 'w':
    case 'r':
    case 't':
    case 'y':
    case 'p':
    case 's':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'z':
    case 'x':
    case 'c':
    case 'v':
    case 'b':
    case 'n':
    case 'm':
    case 'ñ':cout<<"es una letra del abecedario minuscula"; break;
    case 'Q':
    case 'W':
    case 'R':
    case 'T':
    case 'Y':
    case 'P':
    case 'S':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'Z':
    case 'X':
    case 'C':
    case 'V':
    case 'B':
    case 'N':
    case 'M':
    case 'Ñ':cout<<"es una letra del abecedario mayuscula"; break;
    default : cout<<"No es una vocal minuscula";break;
//no hay necesidad de escribir cout po cout, solo se debe tomar encuenta en donde colocas el break
    }

    return 0;

}
