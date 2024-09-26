#include <iostream>
using namespace std;

void mostrar(int *arr, int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void restar(int *vector, int tamanio){
    int resta = vector [0];
    for (int i = 1; i < tamanio; i++)
    {
        resta -= vector[i];
    }cout<<resta;
}

int main(){
    int vector[4]={2,5,2,8};
    mostrar(vector,4);
    cout<<endl;
    restar(vector,4);
    return 0;
}