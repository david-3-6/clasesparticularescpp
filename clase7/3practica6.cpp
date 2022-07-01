#include <iostream>
#include <string>
using namespace std;
int contar_pal(const string& cad){
    int esp=0;
    for(int i=0;i<int(cad.size());i++){
        if(cad[i]==' '){
            esp++;
        }
    }
    return esp+1;
}
int cont_letras(const string& cad, int ult, int& ultletra){
    int cant=0;
    for(int i=ult ;i<int(cad.size())&& cad[i]!=' ';i++){
        ultletra=i;
        cant++;

    }
    return cant;
}
void inversion(string& cad, int& ult){
    int ultletra;
    int nletras=cont_letras(cad, ult, ultletra);
    int f=ultletra;
    for(int i=ult;i<(nletras/2)+ult;i++){
        int aux=cad[i];
        cad[i]=cad[f];
        cad[f]=aux;
        f--;
    }
    ult=ultletra+2;
}
void invertir(string& cad){
    int npal=contar_pal(cad), ult=0;
    for(int i=1;i<=npal;i++){
        inversion(cad,ult);
    }
}
int main (){
    string cad;
    cout<<"Introduce cadena: ";
    getline(cin, cad);
    invertir(cad);
    cout<<"La cadena invertida es: "<<cad;
    return 0;
}