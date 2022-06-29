#include<iostream>
#include <array>
using namespace std;
const int N=20;
typedef array<int, N>Col;
typedef array<Col, N>Matriz;

void leer(Matriz& a, int dim){
    for(int f=0; f<dim; f++){
        for(int c=0; c<dim;c++){
            cin>>a[f][c];
        }
    }
}
bool simetrica (const Matriz& a, int dim){
    bool sim=1;
    for(int f=0; f<dim && sim; f++){
        for(int c=0; c<dim && sim;c++){
            if(c!=f){
                sim=a[f][c]==a[c][f];
            }
        }
    }
    return sim;
}

int main (){
    Matriz a;
    int dim;
    do{
    cout<<"Introduzca dimension de la matriz que va a introducir: ";
    cin>>dim;
    }while(dim<=0 || dim>N);
    leer(a, dim);
    if(simetrica(a, dim)){
        cout<<"LA MATRIZ ES SIMETRICA";
    }else{
        cout<<"LA MATRIZ NO ES SIMETRICA";
    }
    return 0;
}