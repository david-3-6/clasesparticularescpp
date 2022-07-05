#include<iostream>
using namespace std;
struct Complejo{
    double real, imag;
};
Complejo suma (const Complejo &c1, const Complejo &c2){
    Complejo sum;
    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    return sum;
}
Complejo producto (const Complejo &c1, const Complejo &c2){
    Complejo prod;
    prod.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    prod.imag=(c1.real*c2.imag)+(c2.real*c1.imag);
    return prod;
}
void leer (Complejo& n1,Complejo& n2){
    cout<<"Introduzca parte real del primer numero: ";
    cin>>n1.real;
    cout<<"Introduzca parte imaginaria del primer numero: ";
    cin>>n1.imag;
    cout<<"Introduzca parte real del segundo numero: ";
    cin>>n2.real;
    cout<<"Introduzca parte imaginaria del segundo numero: ";
    cin>>n2.imag;
}
int main (){
    Complejo n1, n2;
    leer(n1,n2);
    Complejo sum=suma(n1, n2), prod=producto(n1,n2);
    cout<<"Suma="<<sum.real<<"+"<<sum.imag<<"i"<<"\nProducto="<<prod.real<<"+"<<prod.imag<<"i";
    return 0;
}