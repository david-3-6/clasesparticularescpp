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
int buscar_may(const Vector& v){
    int pos=-1;
    for(int i=0; i<N-1 && pos<0;i++){
        if(v[i]>v[i+1]){
            pos=i;
        }
    }
    return pos;
}
int main (){
    cout<<"Introduzca vector: ";
    Vector v;
    leer(v);
    int pos=buscar_may(v);
    if(pos>=0){
        cout<<"El numero "<<v[pos]<<" en la posicion "<<pos+1<<" es mayor que su sudecesor";
    }else{
        cout<<"No hay numero mayor que su sudecesor";
    }
    return 0;
}