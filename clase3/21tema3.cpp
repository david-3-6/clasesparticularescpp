#include <iostream>
using namespace std;
int calcfibo (int n){
    int sol=0, a=0, b=1;
    for(int i=2;i<=n;i++){
        sol=b+a;
        a=b;
        b=sol;
    }
    if (n==1){
        sol=1;
    }
    return sol;
}
int main (){
    cout<<"Escribe la n que quieras averiguar: ";
    int n;
    cin>>n;
    int sol=calcfibo(n);
    cout<<"El numero en la posición "<<n<<" en la sucesion de Fibonacci es el "<<calcfibo(n);
    return 0;
}