#include <iostream>
using namespace std;
void mostrar_mul(int*arr,int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout<<arr[i]*2<<" ";
    }
    
}
int main(){
    int vector[]={1,2,3,4,5};
    mostrar_mul(vector,5);
    return 0;
}