#include<iostream>
using namespace std;

int main (){
    unsigned N,sum=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    cout<<"Resultado: "<<sum;
    
    return 0;
}