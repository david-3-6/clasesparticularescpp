#include <iostream>
#include <string>
using namespace std;
string pluralizar (const string& p){
    string plural;
    if(p[p.size()-1]=='a' || p[p.size()-1]=='e' || p[p.size()-1]=='i' || p[p.size()-1]=='o'||p[p.size()-1]=='u'){
        plural=p+'s';   
    }else{
        if(p[p.size()-1]=='z'){
            plural=p;
            plural[p.size()-1]='c';
            plural+="es";
        }else{
            plural=p+"es";
        }
    }
    return plural;
}
int main (){
    string palabra;
    cout<<"Escribe palabra en singular: ";
    cin>>palabra;
    cout<<"La palabra en plural es: "<<pluralizar(palabra);
    return 0;
}