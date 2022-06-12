#include <iostream>
using namespace std;
void leer (double& num){
    do{
        cin>>num;
    }while(num>1 || num<0);

}
double pow(double num, double cont){
    double res=1.0;
    if(cont!=0){
        for(int i=1; i<=cont;i++){
            res=res*num;

        }
    }
    return res;
}
double factorial (double cont){
    double res=1;
    if(cont!=0){
        for(int i=1;i<=cont;i++){
            res=res*i;

        }
    }
    return res;
}
void polinomial (double num, double& sol){
    double power;
    double factor;
    double cont=0;
    do{

        power=pow(num, cont);
        factor=factorial(cont);
        cont++;
        sol=sol+(power/factor);
    }while((power/factor)>0.0001);
}
int main (){
    double num;
    double sol=0;
    cout<<"Introduzca el valor de X [0..1]: ";
    leer(num);
    polinomial(num,sol);
    cout<<"Serie: "<<sol;

}
