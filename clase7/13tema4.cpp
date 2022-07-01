#include<iostream>
#include<string>
using namespace std;

void eliminar (string& cadena, int pos){
    for(int f=pos; f<int(cadena.size())-1;f++){
        cadena[f]=cadena[f+1];
    }
    cadena.resize(cadena.size()-1);
}

bool comparar (const string& palabrap,string& palabra){
    bool anagrama=1;
    if(palabrap.size()==palabra.size()){
        bool parar=0, seguir2=1;
        int f=0;
        for(int i=0; i<palabrap.size() && !parar;i++){
           while(f<palabra.size() && seguir2){
                if(palabrap[i]==palabra[f]){
                    eliminar(palabra, f);
                    parar=0;
                    seguir2=0;
                }else{
                    parar=1;
                    f++;
                }

           }
            if(parar){
                anagrama=0;
            }
            seguir2=1;
            f=0;

        }
    }else{
        anagrama=0;
    }
    return anagrama;
}
int main (){
    cout<<"Introduzca el texto en mínusculas hasta (fin) con el anagrama a comprobar al principio."<<endl;
    string palabra, palabrap;
    bool prim=1;
    int cont=0;
    cin >> palabrap;
    bool anagrama;
    while (palabra != "fin") {
        if(!prim){
            anagrama= comparar(palabrap, palabra);
            if (anagrama){
                cont++;
            }
        }else{
            prim=0;
        }
        cin >> palabra;
    }
    cout<<"En este texto hay "<<cont<<" anagramas como <"<<palabrap<<">";

}