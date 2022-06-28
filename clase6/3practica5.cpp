#include <iostream>
#include <array>
using namespace std;
const int MAX =4;
typedef array<int, MAX>Col;
typedef array<Col,MAX>Matriz;
void leer (Matriz& m){
    cout<<"Introduce matriz: "<<endl;
    for(int f=0;f<MAX;f++){
        for(int c=0;c<MAX;c++){
            cin>>m[f][c];
        }
    }
}
int suma (const Matriz& m){
    int sum=0;
    for(int i=0; i<MAX;i++){
        sum+=m[i][i];
    }
    return sum;
}
int main (){    
    Matriz m;
    leer (m);
    cout<<"La suma es: "<<suma(m);
    return 0;
}