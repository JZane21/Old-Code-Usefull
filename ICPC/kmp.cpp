#include <bits/stdc++.h>
using namespace std;

string patron; // cadena del patron
int m;         // tamaño del patron
string texto;  // texto donde se buscara el patron
int n;          // tamaño del texto;
int counter;
//TODO: verificar el tamaño de acuerdo al problema
vector<int> b(250000);

void kmpProcess() {
    int i = 0, j = n-1;
    b[0] = -1;
    while(i < m) {
        while((j>=0) && (patron[i] != patron[j]) && (texto[i] != patron[j])) {
            j--;
            b[i] = patron[j];
        }
        if(j>=0){
            counter++;
        }
        i++;
        j = n-i-1;
    }
    cout<<endl;
}
int kmpSearch() {
  int mov = 0;                                     // contar cuantas veces se encuentra el patron dentro del texto
  int i = 0, j = n-1;
  while (i < n) {
    while ((j >= 0) && (texto[i] != patron[j])) {
        j = b[j];
    }
    i++; j--;
    if (j == m) {
      mov++;
      j = b[j];
    }
  }
  return mov;
}


int main() {
    cin>>texto;
    n = texto.size();
    cin>>patron;
    m = patron.size();
    cout<<"n = "<< n<<endl;
    cout<<"m = "<< m<<endl;
    //kmpProcess();
    cout<<kmpSearch()<<endl;

}
