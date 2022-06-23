#include <iostream>
#include <array>
using namespace std;
const int N=10;
typedef array<int, N>Vector;
void leer(Vector& v){
    for(int i=0; i<N;i++){
        cin>>v[i];
    }
}
int buscar(int x, const Vector& v){
    int pos=-1;
    for(int i=0; i<N && pos<0;i++){
        if(v[i]==x){
            pos=i;
        }
    }
    return pos;
}
int main (){
    cout<<"Introduzca vector: ";
    Vector v;
    leer(v);
    int x;
    cout<<"Valor a buscar: ";
    cin>>x;
    int pos=buscar(x, v);
    if(pos>=0){
        cout<<"La primera posicion donde aparece el "<<x<<" es la numero "<<pos+1;
    }else{
        cout<<"El numero no existe en el vector";
    }
    return 0;
}