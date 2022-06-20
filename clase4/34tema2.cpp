#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int a, b;
    cout<<"Introduce a y b de la forma binómica: ";
    cin>>a>>b;
    double r=sqrt(pow(a,2)+pow(b,2));
    double phi=atan(b/a);
    cout<<a<<"+"<<b<<"i, es en coordenadas polares r="<<r<<" u y phi= "<<phi<<" rad";
    return 0;
}