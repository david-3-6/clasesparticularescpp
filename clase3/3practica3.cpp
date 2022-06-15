#include<iostream>
using namespace std;
void opcionA(){
    cout<<"Ha seleccionado la opcion A"<<endl;
}
void opcionB(){
    cout<<"Ha seleccionado la opcion B"<<endl;
}
void opcionC(){
    cout<<"Ha seleccionado la opcion C"<<endl;
}
bool Salir(){
    bool salida=0;
    char respuesta;
    cout <<"¿Desea salir (S/N)?: ";
    cin>>respuesta;
    if(respuesta=='S'){
        salida=1;
    }
    return salida;
}
int main (){
    bool salir=0;
    char sel;
    while (!salir){
        cout<<"Seleccione A, B, C o X :";
        cin>>sel;
        switch (sel)
        {
        case 'A':
            opcionA();
            break;
        case 'B':
            opcionB();
            break;
        case 'C':
            opcionC();
            break;
        case 'X':
            salir=Salir();
            break;
        default:
            cout<<"Mal seleccionado, intentelo de nuevo";
            break;
        }
    }
}