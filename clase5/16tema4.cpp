#include <iostream>
#include <array>
using namespace std;
const int MAX = 5;
typedef array<int, MAX>Vector;
int letra_numero(char c){
    int valor=-1;
    switch (c){
        case 'a':
        case 'A':
            valor=0;
            break;
        case 'e':
        case 'E':
            valor=1;
            break;
        case 'i':
        case 'I':
            valor=2;
            break;
        case 'o':
        case 'O':
            valor=3;
            break;
        case 'u':
        case 'U':
            valor=4;
            break;
    }
        return valor;
}
void lectura(Vector& Contador){
    int i=0;
    char c;
    
    do{
        cin.get(c);
        if (c!='\n'){
            int valor=letra_numero(c);
            if(valor>=0){
                Contador[valor]++;
            }
            
        }
    }while(c!='\n');
}
int encontrarMayor (const Vector& Contador){
    int posmayor=0;
    for(int i =1; i<MAX;i++){
        if(Contador[i]>Contador[posmayor]){
            posmayor=i;
        }
    }
    return posmayor;
}
void resultado(Vector& Contador){
    int posmayor=0;
    posmayor=encontrarMayor(Contador);
    for(int a=Contador[posmayor];a>0;a--){
        for(int f=0;f<MAX;f++){
            if(Contador[f]==a){
                cout<<"* ";
                Contador[f]--;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"========="<<endl;
    cout<<"a e i o u";
}
void contador(){
    Vector Contador={};
    lectura(Contador);
    resultado(Contador);
}
int main (){
    cout<<"Introduzca un texto: ";
    contador();
}
