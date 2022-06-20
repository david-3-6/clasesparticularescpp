#include<iostream>
using namespace std;
int pasar_de_romano_numero(char c){
    int num;
    switch (c){
    case 'I':
        num=1;
        break;
    case 'V':
        num=5;
        break;    
    case 'X':
        num=10;
        break;
    case 'L':
        num=50;
        break;
    case 'C':
        num=100;
        break;
    case 'D':
        num=500;
        break;
    case 'M':
        num=1000;
        break;
    }
    return num;
}
void paso (int& arab, int rom, int antrom){
    int rom1=pasar_de_romano_numero(rom);
    arab+=rom1;
    if(antrom!='0'){
        int antrom1=pasar_de_romano_numero(antrom);
        if(rom1>antrom1){
            arab-=antrom1*2;
        }
    }
    
}
bool validez_por_repeticion(int& rep, char rom, char antrom){
    bool valido=1;
    if(rom==antrom){
        rep++;
    }else{
        rep=0;
    }
    if(rep>2){
        valido=0;
    }
    return valido; 
}
bool validez_por_sustraccion(char rom, char antrom){
    bool valido=1;
    if(antrom!='0'){
        int rom1=pasar_de_romano_numero(rom);
        int antrom1=pasar_de_romano_numero(antrom);
        if(rom1>antrom1){
            valido=(antrom1==1 && rom1==5)||(antrom1==1 && rom1==10)||(antrom1==10 && rom1==50)||(antrom1==10 && rom1==100)||(antrom1==100 && rom1==500)||(antrom1==100 && rom1==1000);
        }

    }
    return valido;
}
bool sustraccion_invalida(char rom, char antrom, bool&repe){
    bool valido=1;
    if(antrom!='0'){
        
        if(repe && (rom=='V'||rom=='X'||rom=='L'||rom=='C'||rom=='D'||rom=='M')&&(pasar_de_romano_numero(antrom)<pasar_de_romano_numero(rom))){
            valido=0;
        }
        repe=antrom==rom;
    }
    return valido;
}
int main (){
    int arab=0, rep=0;
    char rom, antrom='0';
    bool valido1=1, valido2=1, valido3=1, repe=0;
    cout<<"Introduzca numero en romano: ";
    cin.get(rom);
    while (rom!='\n' && valido1 && valido2 && valido3){
        paso(arab, rom, antrom);
        valido1=validez_por_repeticion(rep, rom, antrom);
        valido2=validez_por_sustraccion(rom,antrom);
        valido3=sustraccion_invalida(rom,antrom, repe);
        antrom=rom;
        cin.get(rom);
    }
    if(valido1 && valido2 && valido3){
        cout<<"El numero es: "<<arab;
    }else{
        cout<<"EL NUMERO NO ES VALIDO";
    }
    

    return 0;
}