#include<iostream>
#include <cstdlib>
using namespace std;

int tirar_dado(){
    return 1+(rand()%(6-1+1));
}
void tirada(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        int res=tirar_dado();
        cout<<"Resultado dado "<<i<<": "<<res<<endl;
        sum+=res;
    }
    cout<<"Suma de todas las tiradas: "<<sum;
}

int main (){
    int N;
    cout<<"Introduzca el numero de dados a tirar: ";
    cin>>N;
    tirada(N);
}