#include <iostream>
#include <array>
using namespace std;
const unsigned MAX=50;
typedef array<unsigned, MAX>Vector;
void leer(unsigned& cant, Vector& alum){
    cout<<"Introduzca los "<<cant<<" alumnos: ";
    for(int i=0; i<cant;i++){
        cin>>alum[i];
    }
}
double calc_media(const Vector& alum, unsigned cant){
    double sum=0;
    for(int i=0; i<cant;i++){
        sum+=alum[i];
    }
    return (sum/cant);
}
unsigned mas_que(const Vector &v, unsigned n, double media){
    unsigned cont=0;
    for(int i=0; i<n;i++){
        if(v[i]>media){
            cont++;
        }
    }
    return cont;
}
unsigned menos_que(const Vector &v, unsigned n, double media){
    unsigned cont=0;
    for(int i=0; i<n;i++){
        if(v[i]<media){
            cont++;
        }
    }
    return cont;
}
int main (){
    unsigned cant;
    do{
        cout<<"Cuantos alumnos hay?:";
        cin>>cant;
    }while(cant<0 || cant>MAX);
    
    Vector alum;
    leer(cant, alum);
    double media=calc_media(alum, cant);
    cout<<"La media es "<<media<<", por tanto hay ";
    unsigned contalt=mas_que(alum, cant, media);
    unsigned contbaj=menos_que(alum, cant, media);
    cout<<contalt<<" mas altos que la media y "<<contbaj<<" mas bajos que la media.";
    return 0;
}