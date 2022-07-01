#include<iostream>
#include <array>
using namespace std;
void elim(string& cad, int pos){
    for(int i=pos;i<int(cad.size())-1;i++){
        cad[i]=cad[i+1];
    }
    cad.resize(cad.size()-1);
}
void quitar_espacios(string& cad){
    for(int i=0; i<int(cad.size());i++){
        if(cad[i]==' '){
            elim(cad, i);
        }
    }
}
int main (){
    cout<<"Introduzca texto: ";
    string cad;
    getline(cin, cad);
    quitar_espacios(cad);
    cout<<cad;
}