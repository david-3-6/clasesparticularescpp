#include<iostream>
using namespace std;

void deteccion (char c, int& mayus){
    if(c>='A' && c<='Z'){
        mayus=1;
    }if (c>='a' && c<='z'){
        mayus=0;
    }else{
        mayus=2;
    }
}
void conversion (char& c, int mayus){
    int aux;
    if(mayus==0){
        aux=c-'a';
        c='A'+aux;
    }else if(mayus==1){
        aux=c-'A';
        c='a'+aux;
    }
}
void mostrar (char c){
    cout<<"la letra convertida es: "<<c;
}
int main (){
    char c;
    cin>>c;
    int mayus;/*Si variable con 0 es minuscula, variable con 1 mayuscula, si variable con un 2 otro caracter*/
    deteccion(c, mayus);
    conversion(c, mayus);
    if(mayus!=2){
       mostrar(c); 
    }else{
        cout<<"es otro caracter";
    }
    
    return 0;
}