#include<iostream>
#include <array>
using namespace std;
const int MAX=15;
typedef array<int, MAX>Vector;
void leer(Vector& v, int& cant){
    int aux;
    cant=0;
    cin>>aux;
    for(int i=0;i<MAX && aux!=0;i++){
        v[i]=aux;
        cant++;
        cin>>aux;
    }
}
int contar (const Vector& v, int cant){
    int maxrep=1;
    for(int i=0; i<cant;i++){
        int rep=1, aux=i;
        while(v[aux+1]==v[i]){
            rep++;
            aux++;
        }
        if(rep>maxrep){
            maxrep=rep;
        }
        
    }
    return maxrep;
}
int main (){
    cout<<"Introduce un vector de maximo "<<MAX<<" numeros, hasta 0: ";
    Vector v;
    int cant=0;
    leer(v, cant);
    int repmax=contar(v,cant);
    cout<<"La subsecuencia comun mas larga es: "<<repmax;
    return 0;
}