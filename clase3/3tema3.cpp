#include <iostream>
using namespace std;
bool esImpar (int num){ 
    return num%2!=0;
}
int main (){
    int num;
    cout<<"Introduce numero: ";
    cin>>num;
    bool impar=esImpar(num);
    if(impar){
        cout<<"Es impar";
    }else{
        cout<<"Es par";
    }
}