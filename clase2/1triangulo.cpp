#include<iostream>
using namespace std;
void dibujar (int L){
    for(int i=1; i<=L;i++){
        for(int f=1; f<=i;f++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main (){
    cout<<"Introduce L: ";
    int L;
    cin>>L;
    dibujar(L);    
}