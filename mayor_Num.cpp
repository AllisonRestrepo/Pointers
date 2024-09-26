#include <iostream>
using namespace std;

void mayor(int *v, int tamanio){
    int mayor = *v;
    for (int i = 0; i < tamanio; i++)
    {
        if (*(v + i) > mayor)
        {
            mayor = *(v + i);
        }
        
    }
    cout<<mayor;
}

int main(){
    int vector[5] = {23,45,34,62,25};
    cout<<"El mayor valor del vector es: "<<endl;
    mayor(vector,5);
    return 0;
}