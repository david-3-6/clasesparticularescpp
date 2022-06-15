#include <iostream>
using namespace std;
int sumaDivisores (int num) {
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main (){
    cout<<"Introduce numero: ";
    int n;
    cin>>n;
    cout<<"La suma de los divisores de "<<n<<" es "<<sumaDivisores(n);
    return 0;
}