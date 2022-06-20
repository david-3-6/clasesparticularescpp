#include<iostream>
#include <cmath>
#include <iomanip> //Esta biblioteca se utiliza nada mas para mostrar mas bonita la salida, tu si no la has usado no la utilices.
using namespace std;
void calc_catetos(int a, int& b, int& c){
    for(int i=1;i<a && c==0;i++){
        for(int t=1;t<a && c==0;t++){
            if(pow(a,2)==pow(i,2)+pow(t,2)){
                b=i;
                c=t;
            }
        }
    }
}
int main (){
    int longMax, a=0, b=0, c=0;
    cout<<"Introduce longitud maxima: ";
    cin>>longMax;
cout<<" a  b  c Longitud"<<endl;
    do{
        a++;
        calc_catetos(a,b,c);
        if((a+b+c)<=longMax && b>0){
            cout<<setw(2)<<a<<"  "<<setw(2)<<b<<"  "<<setw(2)<<c<<"     "<<a+b+c<<endl;//setw() es una funcion de iomanip, haz como si no existiera si no has dado la biblioteca ya que esta funcion solo pone espacios de mas para que quede mas bonita la salida, no afecta a la logica del programa, quita las funciones para comprobarlo.
        }
        b=0;
        c=0;


    }while((a+b+c)<=longMax);
    return 0;
}