#include <iostream>
using namespace std;

bool comprobar (int ano){
    bool bisiesto=(ano%400==0)||((ano%4==0) && (ano%100!=0));
    return bisiesto;   
}
void mostrar (bool bisiesto){
    if(bisiesto){
        cout<<"Es bisiesto";
    }else{
        cout<<"NO es bisiesto";
    }
}
int main (){
    cout<<"Escribe ano para mostrarte si es bisiesto o no: ";
    int ano;
    cin>> ano;
    bool bisiesto=comprobar(ano);
    mostrar(bisiesto);    
}