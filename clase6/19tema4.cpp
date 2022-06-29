#include <iostream>
#include <array>
using namespace std;
const int N=3, M=2;
typedef array<int, M>Col;
typedef array<Col, N>Matriz1;
typedef array<int, N>Col2;
typedef array<Col2,M>Matriz2;
void leer (Matriz1& m){
    for(int f=0;f<N;f++){
        for(int c=0;c<M;c++){
            cin>>m[f][c];
        }
    }
}

void mostrar (const Matriz2& m){
    cout<<"La matriz traspuesta es:"<<endl;
    for(int f=0;f<M;f++){
        for(int c=0;c<N;c++){
            cout<<m[f][c]<<" ";
        }
        cout<<endl;
    }
}
void trasponer(const Matriz1& m, Matriz2& mt){
    for(int f=0;f<N;f++){
        for(int c=0;c<M;c++){
            
            mt[c][f]=m[f][c];
        
        }
    }
}
int main (){
    Matriz1 m;
    Matriz2 mt;
    leer(m);
    trasponer(m,mt);
    mostrar(mt);
    return 0;
}