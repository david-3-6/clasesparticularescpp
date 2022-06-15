#include <iostream>
using namespace std;
int main()
{
    short int i; // Declaración de variable de tipo entero corto
    int x; // Declaración de variable entera
    i = 10000;
    cout << "i * i = " << i * i << endl; // Valor correcto ¿Por que? 
    /*porque 10000*10000=100000000 y al hacerlo en el mismo cout, es una variable de tipo int*/
    i = i * i;
    cout << "i * i = " << i << endl; // Valor incorrecto ¿Por qué?
    /*Porque la variable short int ocupa 2 bites, es decir, 2^16 bits, por tanto puede albergar la variable short int desde -32768 hasta
    32767 entonces al querer almacenar 100000000, se raya el programa y pone ese valor*/
    x = 1.8 + 1.9;
    cout << x << endl; // ¿Qué presenta? ¿Por qué?
    /*Representa la suma entera de 1.8+1.9=3.7, pero como  es una suma entera se queda solo con el 3.*/
    x = int(1.6) + int(1.9);
    cout << x << endl; // ¿Qué presenta? ¿Por qué?
    /*pasa 1.6 a int, es decir se queda con el 1, y pasa el 1.9 a int, es decir se queda con otro uno, entonces hace 1+1=2*/
    cout << '0' << endl; // ¿Qué presenta? ¿Por qué?
    /*Representa el caracter 0*/
    cout << int('0') << endl; // ¿Qué presenta? ¿Por qué?
    /*Representa el valor del caracter 0 en la tabla ASCII*/
    cout << unsigned(-20) << endl; // ¿Qué presenta? ¿Por qué?
    /*-20 no puede ser pasado a tipo unsigned porque esta signado, por tanto da un valor erroneo*/
    cout << int(-1.087e4) << endl; // ¿Qué presenta? ¿Por qué?
    /*Representa -1.087*10^4 y que este sea tipo int*/
    return 0;
}