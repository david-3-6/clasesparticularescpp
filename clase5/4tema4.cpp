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
void inverso(const Vector &vin, unsigned n, Vector &vout){
    int f=n-1;
    for(int i=0;i<n && f>=0;i++){
        vout[f]=vin[i];
        f--;
    }
}
void mostrar(const Vector& v, unsigned n){
    for( int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main (){
    Vector vin,vout;
    unsigned n;
    leer(vin, n);
    inverso(vin, n, vout);
    mostrar(vout, n);
    return 0;
}