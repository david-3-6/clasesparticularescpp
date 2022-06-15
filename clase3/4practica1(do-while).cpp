#include<iostream>
using namespace std;

int main (){
    unsigned N,sum=0,cont=1;
    cin>>N;
    do
    {
        sum+=cont;
        cont++;
    } while (cont<=N);
    cout<<"Resultado: "<<sum;
    
    return 0;
}