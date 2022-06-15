#include <iostream>
using namespace std;
const double PI=3.141592;
void lectura_1(int& g){
    do{
        cin>>g;
    }while(g>360 || g<0);
}
void lectura_2(int& m){
    do{
        cin>>m;
    }while (m>60 || m<0);
}
double conversion (double gradoreal){
    double rad;
    rad=(gradoreal*2*PI)/360;
    return rad;
}
int main (){
    int g, m, seg;
    double gradoreal, rad;
    cout<<"Grados: ";
    lectura_1(g);
    cout<<"Minutos: ";
    lectura_2 (m);
    cout<<"Segundos: ";
    lectura_2(seg);
    gradoreal=g+m/60.0+seg/3600.0;
    rad=conversion(gradoreal);
    cout<<gradoreal<<" grados, son "<<rad<<" radianes";

}