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
int buscar_rep(const Vector& v){
    int pos=-1;
    for(int i=0; i<N && pos<0;i++){
        for(int f=0;f<N &&pos<0;f++){
            if(v[i]==v[f] && i!=f){
                pos=i;
            }
        }
    }
    return pos;
}
int main (){
    cout<<"Introduzca vector: ";
    Vector v;
    leer(v);
    int pos=buscar_rep( v);
    if(pos>=0){
        cout<<"Se repite el "<<v[pos]<<" en la posicion "<<pos+1;
    }else{
        cout<<"No hay numeros repetidos";
    }
    return 0;
}