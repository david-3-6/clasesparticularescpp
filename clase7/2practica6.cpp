#include <iostream>
#include <string>
using namespace std;
void diferencia(const string& a, const string& b, string& dif){
    for(int i=0;i<int(a.size());i++){
        bool encontrado=0;
        for(int f=0;f<int(b.size())&& !encontrado;f++){
            encontrado=a[i]==b[f];
        }
        if(!encontrado){
            dif+=a[i];
        }
    }
}
int main (){
    string a,b,dif="";
    cout<<"Introduce primera cadena: ";
    getline(cin, a);
    cout<<"Introduce segunda cadena: ";
    getline(cin, b);
    diferencia(a,b,dif);
    cout<<"La diferencia entre las dos es: '"<<dif<<"'";
    return 0;
}