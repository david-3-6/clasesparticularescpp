#include <iostream>
using namespace std;
bool comprobante (int pos, char L){
    bool correct;
    switch (pos){
        case 1:
        case 2:
        case 3:
        case 4:
            correct= (L>='0' && L<='9');
        break;
        case 5:
            correct= (L=='-');
        break;
        case 6:
        case 7:
        case 8:
            correct = !(L=='A' || L=='E' || L=='I' || L=='O' || L=='U' || L=='Q');
        break;
        /*case 9:
            correct= (L=='/n');
        break;*/

        default:
            correct=0;
        break;
    }
    return correct;
}
void result(bool correcto){
    if(correcto){
        cout<<"Matricula valida";
    }else{
        cout<<"Matricula NO valida";
    }
}
int main (){
    char L;
    bool correcto=1;
    int pos=1;
    cout<<"introduzca la matricula: ";
    cin.get(L);
    while(L!='\n' && correcto){
        correcto=comprobante(pos, L);
        cin.get(L);
        pos++;
    }
    result(correcto);
}