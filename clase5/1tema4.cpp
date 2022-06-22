#include <iostream>
#include <array>
using namespace std;
const int MAX=10;
typedef array<double, MAX>Vector;
void leer(Vector& v){
    for (int i=0;i<int(v.size());i++) {
        cin>>v[i];
    }
}
double seleccion_mayor(const Vector& v){
    double max=v[0];
    for(int i=1; i<MAX;i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    return max;
}
int main (){
    Vector v;
    double max;
    leer(v);
    max=seleccion_mayor(v);
    cout<<"El mayor numero es: "<<max;
    return 0;
}