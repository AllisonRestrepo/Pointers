
#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}
int main(){
    int x = 2, y = 4;
    swap(&x,&y);
    cout<<"Resultado: "<<x<<" "<<y<<endl;

    return 0;
}