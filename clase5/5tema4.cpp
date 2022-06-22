#include <iostream>
#include <array>
using namespace std;
const int MAX=10;
typedef array<int, MAX>Vector;
void leer(Vector& v,unsigned& n){
    cout<<"Introduce 10 numeros: ";
    for (int i=0; i<MAX;i++){
       cin>>v[i]; 
    }
    cout<<"Introduzca la longitud del vector: ";
    cin>>n;
}
void inverso(Vector &v, unsigned n){
    int aux, f=n-1;
    for(int i=0;i<n/2;i++){
        aux=v[i];
        v[i]=v[f];
        v[f]=aux;
        f--;
    }
}
void mostrar(const Vector& v, unsigned n){
    for( int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main (){
    Vector v;
    unsigned n;
    leer(v, n);
    inverso(v, n);
    mostrar(v, n);
    return 0;
}