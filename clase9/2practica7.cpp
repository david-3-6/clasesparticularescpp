#include <iostream>
#include <array>
#include<cmath>
using namespace std;
const int MAX=30;
struct Coordenadas{
    double x,y;
};
typedef array<Coordenadas, MAX>Huecos;
struct Poligono{
    int M=0;
    Huecos coord;
};
void leer(Poligono& pol){
    do{
    cout<<"Introduzca numero de vertices: ";
    cin>>pol.M;
    }while(pol.M<=0 || pol.M>MAX);
    for(int i=0; i<MAX && i<pol.M; i++ ){
        cout<<"x"<<i+1<<"= ";
        cin>>pol.coord[i].x;
        cout<<"y"<<i+1<<"= ";
        cin>>pol.coord[i].y;
    }
    
}
double lado(double x1, double y1, double x2, double y2){
    return sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
}
double sumaLados(const Poligono& pol){
    int mod=pol.M-1;
    double sum=0;
    int f=1;
    for(int i=0; i<MAX && i<pol.M;i++){
        if(i==pol.M-1){
            sum+=lado(pol.coord[i].x,pol.coord[i].y,pol.coord[0].x,pol.coord[0].y);
        }else{
            sum+=lado(pol.coord[i].x,pol.coord[i].y,pol.coord[i+1].x,pol.coord[i+1].y);
        }
        
    }
    return sum;
}
int main (){
    Poligono pol;
    leer(pol);
    double perimetro=sumaLados(pol);
    cout<<"Perimetro="<<perimetro;
    return 0;
}