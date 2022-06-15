#include<iostream>
using namespace std;

int main (){
    unsigned N,sum=0,cont=1;
    cin>>N;
    while(cont<=N){
        sum+=cont;
        cont++;
    }
    cout<<"Resultado: "<<sum;
    
    return 0;
}