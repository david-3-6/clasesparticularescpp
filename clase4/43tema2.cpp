#include <iostream>
using namespace std;
int suma_divisores (int num){
    int sum=0;
    for (int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}
bool perfecto (int num){
    bool perf;
    int sum=suma_divisores(num);
    perf=(sum==num);
    return perf;
}
int main (){
    int num;
    cout<<"Introduzca numero: ";
    cin>>num;
    bool perf=perfecto(num);
    if(perf){
        cout<<"El numero es perfecto.";
    }else{
        cout<<"El numero NO es perfecto.";
    }
    return 0;
}