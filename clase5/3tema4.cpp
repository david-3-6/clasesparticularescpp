#include <iostream>
#include<array>
using namespace std;
const int MAX=10;
typedef array <double,MAX>Vector;
double vector_sum(const Vector &v, unsigned n){
    int sum=0;
    for (int i=0; i<n;i++){
        sum+=v[i];
    }
    return sum;
}
double vector_min(const Vector &v, unsigned n){
    double min=v[0];
    for(int i=1; i<n;i++){
        if(min>v[i]){
            min=v[i];
        }
    }
    return min;
}
double vector_max(const Vector &v, unsigned n){
    double max=v[0];
    for(int i=1; i<n;i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    return max;
}
void leer (Vector& v, unsigned& n){
    cout<<"Introduce 10 numeros: ";
    for (int i=0; i<MAX;i++){
       cin>>v[i]; 
    }
    cout<<"Introduzca la longitud del vector: ";
    cin>>n;
}
int main (){
    Vector v;
    unsigned n;
    leer(v,n);
    cout<<"Mayor: "<<vector_max(v,n)<<endl<<"Menor: "<<vector_min(v,n)<<endl<<"Suma: "<<vector_sum(v,n);
    return 0;
    
}