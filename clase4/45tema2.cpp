#include<iostream>
#include <cmath>
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
    int a, b=0, c=0;
    cout<<"Introduce la hipotenusa: ";
    cin>>a;
    calc_catetos(a, b, c);
    cout<<"Triangulo: "<<a<<" "<<b<<" "<<c;
    
    return 0;
}