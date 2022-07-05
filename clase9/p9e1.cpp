#include <iostream>
#include <string>
#include <array>
using namespace std;
const int MAX=10;
struct parametros{
    int longi=0;
    int veces=0;
};
typedef array<parametros,MAX>Longitudes;
struct Datos{
    int cant=0;
    Longitudes data;
};
int buscar (int largo, const Datos& info){
    int pos=-1;
    for(int i=0; i<info.cant && pos<0;i++ ){
        if(info.data[i].longi==largo){
            pos=i;
        }
    }
    return pos;
}
void mostrar (const Datos& info){
    cout<<"Longitudes Repeticiones"<<endl;
    for(int i=0; i<info.cant;i++){
        cout<<info.data[i].longi<<"          "<<info.data[i].veces<<endl;
    }
}
void almacenar(Datos& info,const string& palabra){
    int largo= int(palabra.size());
    int pos=buscar(largo, info);
    if (pos>=0){
        info.data[pos].longi=largo;
        info.data[pos].veces++;
    }else{
        info.data[info.cant].longi=largo;
        info.data[info.cant].veces=1;
        info.cant++;
    }
}
void procesar (){
    string palabra;
    Datos info;
    cin>>palabra;
    while(palabra!="fin"){
        almacenar(info, palabra);
        cin>>palabra;
    }
    mostrar(info);
}
int main (){
    cout<<"Introduzca un texto (fin para terminar): "<<endl;
    procesar();

}
