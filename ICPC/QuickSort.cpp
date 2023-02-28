#include<iostream>
using namespace std;

void QuickSort(int [], int , int);
int Partition(int [], int , int);

int main(){
    int end1;
    cin>>end1;
    int arr[end1];
    for(int i=0;i<end1;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,end1);
    cout<<"\n";
    for(int i=0;i<end1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

int Partition(int array1[], int puntero1, int puntero2){
    const int Pivot = array1[puntero1];
    int aux=0;
    int start = puntero1, end1 = puntero2;
    while(start<end1){
        while(array1[start]<=Pivot){
            start++;
        }
        while(array1[end1]>Pivot){
            end1--;
        }
        if(start<end1){
            aux = array1[start];
            array1[start] = array1[end1];
            array1[end1] = aux;
        }
    }
    aux = array1[puntero1];
    array1[puntero1] = array1[end1];
    array1[end1] = aux;

    return end1;
}

void QuickSort(int array1[], int inicio, int fin){
    if(inicio<fin){
        int loc = Partition(array1,inicio,fin);
        QuickSort(array1,inicio,loc-1);
        QuickSort(array1,loc+1,fin);
    }
}
