#include <array>
#include<iostream>
using namespace std;
const int MAX=5;
typedef array<int, MAX>Vector;
void leer(Vector& v){
    for (int i=0;i<MAX;i++){
        cin>>v[i];
    }
}
int buscar_pos(int n, const Vector& v, int npos){
    int pos=-1;
    for(int i=0; i<MAX && pos<0 && i<npos;i++){
        if(v[i]==n){
            pos=i;
        }
    }
    return pos;
}
int mayor (const Vector& v, int& pos, const Vector& posiciones, int npos){
    int mayor=v[0];
    pos=0;
    for(int i=0; i<MAX;i++){
        if(mayor<=v[i]&& buscar_pos(i,posiciones, npos)<0){
            mayor=v[i];
            pos=i;
        }
    }
    return mayor;
}
int buscar_min (const Vector& v,  Vector& posiciones, int& npos){
    int pos=0;
    int min=mayor(v,pos, posiciones, npos);
    for(int i=0; i<MAX;i++){
        if(min>v[i] && buscar_pos(i,posiciones, npos)<0){
            min=v[i];
            pos=i;
        }
        
    }
    posiciones[npos]=pos;
    npos++;

    return min;
}


void proceso(const Vector& vin, Vector& vout){
    Vector posiciones={}; //Guarda las posiciones ya puestas;
    int npos=0; //Guarda tamaño del vedctor de posiciones;
    int min,minant,ord=1;
    bool primero=1;
    for(int i=0;i<MAX;i++){
        min=buscar_min(vin,posiciones, npos);
        int pos=posiciones[i];
        if(!primero){
            if(minant!=min){
                ord++;
            }
        }
        vout[pos]=ord;
        primero=0;
        minant=min;
    }

}
void mostrar(const Vector& v){
    for(int i=0; i<MAX;i++){
        cout<<v[i]<<" ";
    }
}
int main (){
    cout<<"Introduzca vector: ";
    Vector vin,vout;
    leer(vin);
    proceso(vin, vout);
    mostrar(vout);
    return 0;
}