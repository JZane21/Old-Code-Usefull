#include <>
using namespace std;
int main(){
    input;
    int vertices, aristas;
    cin>>vectores>>aristas;
    vector<int> grafo[vertices];
    for(int i=0; i<aristas; i++){
        int a,b;
        cin>>a>>b;
        grafo[a].push_back(b);
        //no dirigido
        //si comentamos la linea de abajo, se vuelve dirigido
        grafo[b].push_back(a);
    }

    for(int i=0; i<vertices; i++){
        cout<<"["<<i<<"] -> ";
        for(int j=0; j<grafo[i].size(); j++){
            cout<<"["<<grafp[i][j]<<"]";
        }
        cout<<endl;
    }
    return 0;
}
