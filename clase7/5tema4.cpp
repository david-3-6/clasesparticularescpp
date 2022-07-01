#include <iostream>
#include<string>
using namespace std;
typedef enum {Fiat, FordFiesta, Renault5, SeatToledo, OpelCorsa, Irreconocido}Tcoche;
Tcoche string2coche(const string& cadena){
    Tcoche coche=Irreconocido;
    int longi=cadena.size();
    if(cadena.size()==4){
        if(cadena[0]=='f'||cadena[0]=='F'){
            if(cadena[1]=='i'||cadena[1]=='I'){
                if(cadena[2]=='a'||cadena[2]=='A'){
                    if(cadena[3]=='t'||cadena[3]=='T'){
                        coche=Fiat;
                    }
                }
            }
        }
    }else if(cadena.size()==11){
        if(cadena[0]=='f'||cadena[0]=='F'){
            if(cadena[1]=='o'||cadena[1]=='O'){
                if(cadena[2]=='r'||cadena[2]=='R'){
                    if(cadena[3]=='d'||cadena[3]=='D'){
                        if(cadena[4]==' ') {
                            if(cadena[5]=='f'||cadena[5]=='F'){
                                if(cadena[6]=='i'||cadena[6]=='I'){
                                    if(cadena[7]=='e'||cadena[7]=='E'){
                                        if(cadena[8]=='s'||cadena[8]=='S'){
                                            if(cadena[9]=='t'||cadena[9]=='T'){
                                                if(cadena[10]=='a'||cadena[10]=='A'){
                                                    coche=FordFiesta;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(cadena[0]=='s'||cadena[0]=='S'){
            if(cadena[1]=='e'||cadena[1]=='E'){
                if(cadena[2]=='a'||cadena[2]=='A'){
                    if(cadena[3]=='t'||cadena[3]=='T'){
                        if(cadena[4]==' ') {
                            if(cadena[5]=='t'||cadena[5]=='T'){
                                if(cadena[6]=='o'||cadena[6]=='O'){
                                    if(cadena[7]=='l'||cadena[7]=='L'){
                                        if(cadena[8]=='e'||cadena[8]=='E'){
                                            if(cadena[9]=='d'||cadena[9]=='D'){
                                                if(cadena[10]=='o'||cadena[10]=='O'){
                                                    coche=SeatToledo;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }else if(cadena.size()==10){
        if(cadena[0]=='o'||cadena[0]=='O'){
            if(cadena[1]=='p'||cadena[1]=='P'){
                if(cadena[2]=='e'||cadena[2]=='E'){
                    if(cadena[3]=='l'||cadena[3]=='L'){
                        if(cadena[4]==' ') {
                            if(cadena[5]=='c'||cadena[5]=='C'){
                                if(cadena[6]=='o'||cadena[6]=='O'){
                                    if(cadena[7]=='r'||cadena[7]=='R'){
                                        if(cadena[8]=='s'||cadena[8]=='S'){
                                            if(cadena[9]=='a'||cadena[9]=='A'){
                                                coche=OpelCorsa;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }else if(cadena.size()==9){
        if(cadena[0]=='r'||cadena[0]=='R'){
            if(cadena[1]=='e'||cadena[1]=='E'){
                if(cadena[2]=='n'||cadena[2]=='N'){
                    if(cadena[3]=='a'||cadena[3]=='A'){
                        if(cadena[4]=='u'||cadena[4]=='U') {
                            if(cadena[5]=='l'||cadena[5]=='L'){
                                if(cadena[6]=='t'||cadena[6]=='T'){
                                    if(cadena[7]==' '){
                                        if(cadena[8]=='5'){
                                            coche=Renault5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    return coche;
}
string coche2string(Tcoche coche){ 
    string res="";
    if(coche==0){
        res="Fiat";
    }else if(coche==1){
        res="Ford Fiesta";
    }else if(coche==2){
        res="Renault 5";
    }else if(coche==3){
        res="Seat Toledo";
    }else if(coche == 4){
        res="Opel Corsa";
    }
    return res;
}
int main (){
    string cadena;
    getline(cin,cadena);
    Tcoche coche=string2coche(cadena);
    string result=coche2string(coche);
    cout<<result;
    return 0;
}