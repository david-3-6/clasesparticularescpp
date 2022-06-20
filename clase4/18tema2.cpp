#include <iostream>
#include <cmath>
using namespace std;
const unsigned CONV=2;

unsigned long long conversion_bin(int ndecimal){
    unsigned long long bin=0;
    int pot=0; //potencia
    while (ndecimal>0){
        bin+=(pow(10,pot))*(ndecimal%CONV);
        ndecimal/=CONV;
        pot++;
    }
    return bin;
}
int main  (){
    unsigned long long nbinario;
    int ndecimal;
    cout<<"Introduce numero decimal: ";
    cin>>ndecimal;
    nbinario=conversion_bin(ndecimal);
    cout<<"El numero en binario es: "<<nbinario;
    return 0;
}