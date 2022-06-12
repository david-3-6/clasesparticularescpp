#include <iostream>
#include<cmath>
using namespace std;
const float CONSTANTE1=0.00105;
const float CONSTANTE2=0.0042;
const float CONSTANTE3=1.352;
const float EXPLOSION=3.2;
float calculo (float T){
    float presion;
    presion=(CONSTANTE1*(pow(T,2)))+(CONSTANTE2*T)+CONSTANTE3;
    return presion;
}
void mostrarresultado(float P){
    if(P>=EXPLOSION){
        cout<<"Como la presion es de "<<P<<" atmosferas, la lata explota";
    }else{
        cout<<"Como la presion es de "<<P<<" atmosferas, la lata NO explota";
    }
}
int main (){
    float T, P;
    cout<<"Introduzca la temperatura: ";
    cin>>T;
    P=calculo(T);
    mostrarresultado(P);
    return 0;
}