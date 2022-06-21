#include <iostream>
#include <ctime> // Para time()
#include <cstdlib> // Para rand() y srand()
#include <cctype> // Para toupper()
using namespace std;
const int A=1, B=3;
void reinicia_semilla_aleatoria(){
    srand(time(0));
}
int asigna_premio(){
    return A+(rand()%(B-A+1));
}
// Devuelve una puerta que no sea ni elegida ni otra.
int abre_puerta(int elegida, int otra){
    int abrir=0;
    int inicio=asigna_premio();
    while(abrir==0){
        if(inicio!=elegida && inicio!=otra){
            abrir=inicio;
        }else{
            inicio++;
        }
        if(inicio>B){
            inicio=1;
        }

    }
    return abrir;
}
int pregunta_elige_puerta(){
    int eleccion;
    cout<<"Elija una puerta {1,2,3}: ";
    cin>>eleccion;
    return eleccion;
}
bool pregunta_si_cambiar(int elegida){
    bool cambia=0;
    char resp;
    cout<< "Has elegido la puerta "<<elegida<<" Quieres cambiar a la otra puerta? S/N: ";
    cin>>resp;
    if(resp=='S'){
        cambia=1;
    }
    return cambia;  
}
int random_int(int min, int max);

int main()
{
    int elegida, premio, abierta, final;
    reinicia_semilla_aleatoria();
    premio = asigna_premio();
    elegida = pregunta_elige_puerta();
    // Ahora el presentador abre una puerta que no está elegida
    // ni contiene el premio.
    abierta = abre_puerta(elegida, premio);
    cout <<"Se abre la puerta "<< abierta <<" y contiene una cabra!"<< endl;
    bool cambia = pregunta_si_cambiar(elegida);
    if (cambia) {
        // Abre la puerta que no está elegida ni está abierta ya.
        final = abre_puerta(elegida, abierta);
    } else {
        final = elegida;
    }
    cout << "Elegiste la puerta " << final << endl;
    if (final == premio) {
        cout << "Y te llevas el premio!!!" << endl;
    } else {
    cout << "Y te llevas una CABRA!!!" << endl;
    }
    return 0;
}