#include<iostream>
using namespace std;
void resultado (double nota){
    if(nota>=0 && nota<5){
        cout<<"SUSPENSO";
    }else if (nota>=5 && nota<7){
        cout<<"APROBADO";
    }else if (nota>=7 && nota<9){
        cout<<"NOTABLE";
    }else if (nota>=9 && nota<10){
        cout <<"SOBRESALIENTE";
    }else if (nota==10){
        cout<<"MATRICULA DE HONOR";
    }else{
        cout<<"NOTA INTRODUCIDA ERRONEA";
    }
}
int main (){
    double nota;
    cout <<"Introduzca una nota: ";
    cin>>nota;
    resultado(nota);
    return 0;
}