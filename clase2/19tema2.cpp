#include<iostream>
using namespace std;

void optimizar(int dinero, int& veinte, int& diez, int& cinco, int& uno){
    while(dinero>=20){
        dinero-=20;
        veinte++;
    }
    while(dinero>=10){
        dinero-=10;
        diez++;
    }
    while(dinero>=5){
        dinero-=5;
        cinco++;
    }
    while(dinero>=1){
        dinero-=1;
        uno++;
    }
}
void mostrar (int veinte, int diez, int cinco, int uno){
    cout<<"EL CAJERO DARA: "<<endl<<"billetes 20: "<<veinte<<endl<<"billetes 10: "<<diez<<endl<<"billetes 5: "<<cinco<<endl<<"monedas 1: "<<uno;
}
int main (){
    int dinero, veinte=0, diez=0, cinco=0, uno=0;
    cout<<"Introduce la cantidad de dinero que quiere: ";
    cin>>dinero;
    optimizar(dinero, veinte, diez, cinco, uno);
    mostrar(veinte, diez, cinco, uno);
    return 0;
}