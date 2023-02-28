#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
        int capitan[T];
        for(int j=0; j<T; j++){
        int N;
        cin>>N;
        int edades[N];
            for (int i=0; i<N; i++){
                cin>>edades[i];
            }
            capitan[j]=edades[(int)(N/2)];
        }
        for(int i=0; i<T; i++){
            cout<<"Case "<<i+1<<": "<<capitan[i]<<endl;
        }
    return 0;
}
