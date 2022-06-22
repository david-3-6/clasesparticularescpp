#include<iostream>
#include<array>
#include<cctype>
using namespace std;
const int MAX=10;
typedef array<int, MAX>Vector;

void contar (char c, Vector& v){
    int numero=c-'0';
    v[numero]++;
}
void mostrar (const Vector& v){
    for(int i=0; i<MAX;i++){
        cout<<i<<":"<<v[i]<<"; ";
    }
}
int main (){
    Vector v={};
    cout<<"Introduzca una secuencia de digitos: ";
    char c;
    cin.get(c);
    while(isdigit(c)){
        contar(c,v);
        cin.get(c);
    }
    mostrar(v);
    return 0;
}