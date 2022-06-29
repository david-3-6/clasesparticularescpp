#include <iostream>
#include <array>
#include<cmath>
using namespace std;
const int MAX=100;
typedef array<double, MAX>Vector;
void leer (Vector& v, unsigned n){
    cout<<"introduce vector: ";
    for(int i=0; i<n;i++){
        cin>>v[i];    
    }
}
double calc_media(const Vector& v, unsigned n){
    double sum=0;
    for(int i=0; i<n;i++){
        sum+=v[i];
    }
    return (sum/n);
}
double std_dev(const Vector &v, unsigned n, double media){
    double sum=0;
    for(int i=0; i<int(n);i++){
        sum+=(pow(v[i]-media,2));
    }
    return sqrt(sum/n);
}
int main (){
    unsigned n;
    cout<<"Introduce la cantidad de numeros: ";
    cin>>n;
    Vector v;
    leer(v,n);
    double media=calc_media(v, n);
    double dev=std_dev(v,n,media);
    cout<<"La media es: "<<media<<endl<<"La desviacion es: "<<dev;
    return 0;
}