/*1)p=49
    s=70
  2)p=49
    s=21
  3)p=28
    s=21
  4)p=7
    s=21
  5)p=7
    s=14
  6)p=7
    s=7
    
    El algoritmo calcula el máximo comun divisor de dos numeros*/
#include <iostream>
using namespace std;
int main()
{
    int primero, segundo;
    cout << "Dos números: ";
    cin >> primero >> segundo;
    while (primero!=segundo){
        if (primero > segundo){
            primero -= segundo;
        }
        else{
            segundo -= primero;
        }
    }
    cout << primero << endl;
    return 0;
}
