#include<iostream>
using namespace std;
/*Programamos nosotros el pow() en vez de coger
la funcion ya hecha en la biblioteca cmath*/
double pow(double a, int b){
    double result=1;
    for (int i=1;i<=b;i++){
       result*=a; 
    }
    return result;
}

int main (){
    double a;    int b;
    cout<<"Introduce a: ";
    cin>>a;
    cout<<"Introduce b: "; 
    cin>>b;
    if(b<0){
        cout<<"Resultado: "<<1.0/pow(a,-b);
    }else{
        cout<<"Resultado: "<<pow(a,b);
    }
}