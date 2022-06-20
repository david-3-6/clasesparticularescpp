#include <iostream>
using namespace std;

int contdig (int N){
    int cont =0;
    while(N>0){
        N/=10;
        cont++;
    }

    return cont;
}
int sumadig(int N){
    int sum=0;
    while (N>0){
        sum+=(N%10);
        N/=10;
    }
    return sum;
}
int main (){
    int N;
    cout<<"Introduce un numero: ";
    cin>>N;
    int ndig=contdig(N);
    cout<<"El numero de digitos del numero introducido es: "<<ndig<<endl;
    int sum=sumadig(N);
    cout<<"La suma de todos sus digitos es: "<<sum;
    return 0;
}