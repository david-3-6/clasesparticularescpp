#include <iostream>
#include<string>
using namespace std;
int pasar_a_dig(char c){
    return c-'0';
}
int cont_dec(const string& cad){
    int sum=0;
    bool encontrado=0;
    for(int i=int(cad.size())-1;i>=0 && !encontrado;i--){
        encontrado=cad[i]=='.';
        if(!encontrado){
            sum++;
        }
    }
    if(!encontrado){
        sum=0;
    }
    return sum;
}
void elim_neg(string& cad){
    for(int i=0;i<int(cad.size())-1;i++){
        cad[i]=cad[i+1];
    }
    cad.resize(cad.size()-1);
}
double convert(string& cad){
    double n=0,k=1;
    bool neg= cad[0]=='-';
    if(neg){
        elim_neg(cad);
    }
    int ndecimales=cont_dec(cad);
    if(ndecimales>0){
        for(int i=1;i<=ndecimales;i++){
            k*=10;
        }
        for(int i= int(cad.size())-1;i>=0 && cad[i]!='.';i--){
            int dig=pasar_a_dig(cad[i]);
            n+=(dig*(1.0/k));
            k/=10;
        }
        k=1;
        for(int i= int(cad.size())-2-ndecimales;i>=0;i--){
            int dig=pasar_a_dig(cad[i]);
            n+=(dig*k);
            k*=10;
        }
    }else{
        for(int i= int(cad.size())-1;i>=0;i--){
        int dig=pasar_a_dig(cad[i]);
        n+=(dig*k);
        k*=10;
        }
    }
    if(neg){
        n=-n;
    }
    
    return n;
}
int main (){
    string n="";
    cin>>n;
    double num=convert(n);
    cout<<num;
}