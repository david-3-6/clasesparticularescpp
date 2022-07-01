#include<iostream>
#include <array>
#include <string>
using namespace std;
const int MAX=5;
typedef array<char,MAX>Col;
typedef array<Col, MAX>TMLetras;
void leer (TMLetras& m){
    for(int f=0;f<MAX;f++){
        for(int c=0;c<MAX;c++){
            cin>>m[f][c];
        }
    }
}
string diagonalesMatriz(const TMLetras& m){
    string res="";
    int f=0,cinicial=MAX-1;
    for(int i=1;i<=MAX && cinicial>=0;i++){
        int c=cinicial;
        while(c!=MAX){
            res+=m[f][c];
            f++;
            c++;
        }
        f=0;
        cinicial--;
    }
    cinicial=1;
    for(int i=1;i<=MAX && cinicial<MAX;i++){
        int c=cinicial;
        while(c!=MAX){
            res+=m[c][f];
            f++;
            c++;
        }
        f=0;
        cinicial++;
    }
    return res;

}
int main (){
    cout<<"Introduce matriz: ";
    TMLetras m;
    leer(m);
    string res=diagonalesMatriz(m);
    cout<<"Resultado: "<<res;
    return 0;
}