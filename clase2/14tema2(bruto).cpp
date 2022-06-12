#include <iostream>
using namespace std;
bool primo (int i){
    bool p=1;
    for (int f=2; f<i;f++){
        if((i%f)==0){
            p=0;
        }
    }
    return p;
}
void proceso (int x){
    cout<<"2"<<endl;
    for(int i=3;i<=x;i+=2){
        bool esprimo= primo(i);
        if (esprimo){
            cout<<i<<endl;
        }
    }
}
int main (){
    int x;
    cout<<"Introduce x: ";
    cin>>x;
    if(x>1){
        proceso(x);
    }
    return 0;
}