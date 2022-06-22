#include <iostream>
#include <array>
using namespace std;
const int N=5;
typedef array<double, N>Vector;
void leer (Vector& v){
    for(int i=0; i<N;i++){
        cin>>v[i];
    }
}
double prod(const Vector& a, const Vector& b){
    double res=0;
    for(int i=0;i<N;i++){
        res+=a[i]*b[i];
    }
    return res;
}
int main (){
    Vector a, b;
    cout<<"Introduce el primer vector: ";
    leer (a);
    cout<<"Introduce el segundo vector: ";
    leer(b);
    cout<<"El resultado del producto escalar es: "<<prod(a,b);
    return 0;
}