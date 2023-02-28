#include <iostream>
#include <stack>
using namespace std;
int main(){
    int numeroMedias;
    cin>>numeroMedias;
    int numeroPares=numeroMedias;
    int numeroParesAux;
        stack<int> medias;
        stack<int> aux;
        int counter;
        while(numeroMedias!=counter){
        int media;
        cin>>media;
        medias.push(media);
        counter++;
        }
        while(!medias.empty()){
            if(medias.size() == aux.size()){
                if(medias.top() == aux.top()){
                    medias.pop();
                    aux.pop();
                    numeroParesAux++;
                } else{
                    break;
                }

            }
                else {
                aux.push(medias.top());
                medias.pop();
                if(medias.top() == aux.top()){
                    medias.pop();
                    aux.pop();
                    numeroParesAux++;
                }
            }
        }
            if(numeroParesAux==numeroPares){
                cout<<numeroParesAux;
            }else{
                cout<<"impossible";
            }


    return 0;
}
