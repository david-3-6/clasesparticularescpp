#include <iostream>
using namespace std;

void detectormayusminus (char c, int& contmayus, int& contminus){
    if (c>='A' && c<='Z'){
        contmayus++;
    }else if(c>='a' && c<='z'){
        contminus++;
    }
}
void detectorvocalconsonante (char c, int& contvocal, int& contconso){
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ){
        contvocal++;
    }else {
        contconso++;
    }

    if(c==' '){
        contconso--;
    }
}
void detectorpalabras(char c, int&contpal){
    if(c==' '){ contpal++; }
}
int main (){
    cout<<"introduzca texto terminado en punto: ";
    char c;
    int contmayus=0, contminus=0, contconso=0,contvocal=0, contpal=1;
    cin.get(c);
    while(c!='.'){
        detectormayusminus(c, contmayus, contminus);
        detectorvocalconsonante(c, contvocal, contconso);
        detectorpalabras(c, contpal);
        cin.get(c);
    }
    cout<<"numero de mayusculas: "<<contmayus<<endl<<"numero de minusculas: "<<contminus<<endl<<"numero de vocales: "<<contvocal<<endl<<"numero de consonantes: "<<contconso<<endl<<"numero de palabras: "<<contpal;
}
