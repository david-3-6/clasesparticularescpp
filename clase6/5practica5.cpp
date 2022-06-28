#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;
const char AGUA0=' ',AGUA='O', BARCO='B', TOCADO='X';
const int TAM=10;
typedef array <char, TAM>Col;
typedef array<Col, TAM>Tablero;
void inicializar (Tablero& m){
    for(int f=0; f<TAM;f++){
        for(int c=0; c<TAM;c++){
            m[f][c]=AGUA0;
        }
    }
}
void intercambiar (unsigned& filas, unsigned& columnas){
    unsigned aux=filas;
    filas=columnas;
    columnas=aux;
}
/*void analisis1 (const Tablero& tablero, unsigned fila, int i, bool fin, bool sentido, bool term, unsigned columna, bool horizontal, unsigned n){
    if(tablero[fila][i]==BARCO && !fin){
        sentido=!sentido;
        term=cabe(sentido,tablero,fila,columna,horizontal,n,1);
    }else if(tablero[fila][i]==BARCO){
        term=1;
    }
}
void analisis2 (const Tablero& tablero, unsigned fila, int i, bool fin, bool sentido, bool term, unsigned columna, bool horizontal, unsigned n){
    if(tablero[i][columna]==BARCO && !fin){
         sentido=!sentido;
        term=cabe(sentido,tablero,fila,columna,horizontal,n,1);
    }else if(tablero[i][columna]==BARCO){
        term=1;
    }
}*/
bool cabe(bool& sentido, const Tablero& tablero, unsigned fila, unsigned columna, bool horizontal, unsigned n, bool fin, bool& comprobado, bool bien){
    bool term=0;
    if(!horizontal && bien){
        intercambiar(fila,columna);
        bien=!bien;
    }
    if(sentido){
        term=(columna+(n-1))>=TAM;
            if(!fin&&term){
                sentido=!sentido;
                term=cabe(sentido,tablero,fila,columna,horizontal,n,1, comprobado, bien);
            }
    }else{
        int algo=columna-(n-1);
        term=algo<0;
        if(!fin&&term){
            sentido=!sentido;
            term=cabe(sentido,tablero,fila,columna,horizontal,n,1, comprobado, bien);
        }
    }
    if(!horizontal && !bien){
        intercambiar(fila,columna);
        bien=!bien;
    }
    if(!term && !comprobado){// vuelve a comprovar en la recursividad
        if(sentido && horizontal){
            for(int i=int(columna);i<TAM && i<=int(columna)+(n-1) && !term;i++){
                //analisis1(tablero, fila, i, fin, sentido, term, columna, horizontal, n);
                if(tablero[fila][i]==BARCO && !fin){
                    sentido=!sentido;
                    term=cabe(sentido,tablero,fila,columna,horizontal,n,1,comprobado,bien);//comp
                }else if(tablero[fila][i]==BARCO){
                    term=1;
                }
                if(i==int(fila)-(n-1)){
                    comprobado=1; 
                }
            }

        }else if(!sentido && horizontal){
            for(int i=int(columna);i>=0 && i>=int(columna)-(n-1) && !term;i--){
               //analisis1(tablero, fila, i, fin, sentido, term, columna, horizontal, n);
               if(tablero[fila][i]==BARCO && !fin){
                    sentido=!sentido;
                    term=cabe(sentido,tablero,fila,columna,horizontal,n,1, comprobado,bien);
                }else if(tablero[fila][i]==BARCO){
                    term=1;
                }
                if(i==int(fila)-(n-1)){
                    comprobado=1; 
                }
            }
        }else if(sentido&& !horizontal){
            for(int i=int(fila);i<TAM && i<=int(fila)+(n-1)&& !term;i++){
                //analisis2(tablero, fila, i, fin, sentido, term, columna, horizontal, n);
                if(tablero[i][columna]==BARCO && !fin){
                    sentido=!sentido;
                    term=cabe(sentido,tablero,fila,columna,horizontal,n,1, comprobado,bien);
                }else if(tablero[i][columna]==BARCO){
                    term=1;
                }
                if(i==int(fila)+(n-1)){
                    comprobado=1; 
                }
                
            }
        }else if(!sentido&& !horizontal){
            for(int i=int(fila);i>=0 && i>=int(fila)-(n-1) && !term;i--){
               //analisis2(tablero, fila, i, fin, sentido, term, columna, horizontal, n);
                if(tablero[i][columna]==BARCO && !fin){
                    sentido=!sentido;
                    term=cabe(sentido,tablero,fila,columna,horizontal,n,1, comprobado,bien);
                }else if(tablero[i][columna]==BARCO){
                    term=1;
                }
                if(i==int(fila)-(n-1)){
                    comprobado=1; 
                }
            }
            
            
        }
    }
    return term;
}
bool colocaBarco(Tablero& tablero, unsigned fila, unsigned columna, bool horizontal, unsigned n){
    bool term;
    bool sentido=rand()%2;
    /*bool sentido;
    cin>>sentido;*/
    bool comprobado=0, bien=1;
    //cout<<"fila:"<<fila<<endl<<"columna:"<<columna<<endl<<"Horizontal: "<<horizontal<<endl<<"Sentido: "<<sentido<<endl;
    term=cabe(sentido, tablero, fila, columna, horizontal, n, 0,comprobado, bien);   
    if(!term){
        if(sentido&& horizontal){
            
            for(int i=int(columna);i<TAM && i<=int(columna)+(n-1);i++){
                tablero[fila][i]=BARCO;
            }
        }else if (!sentido&&horizontal){
            
            for(int i=int(columna);i>=0 && i>=int(columna)-(n-1);i--){
                tablero[fila][i]=BARCO;
            }
        }else if(sentido&&!horizontal){
            
            for(int i=int(fila);i<TAM && i<=int(fila)+(n-1);i++){
                tablero[i][columna]=BARCO;
            }
        }else if(!sentido && !horizontal){
            
            for(int i=int(fila);i>=0 && i>=int(fila)-(n-1);i--){
                tablero[i][columna]=BARCO;
            }
        }
    }
    return term;
}
void poner_barcos(Tablero& m, bool& terminar){
    unsigned fil=(rand()%TAM); //unsigned
    unsigned col=(rand()%(TAM));
    bool horizontal=rand()%2;
    /*int fil, col;
    bool horizontal;
    cin>>fil>>col>>horizontal;*/
    terminar=colocaBarco(m,fil,col,horizontal,5);
    for(int i=1;i<=2 && !terminar;i++){
        
        horizontal=rand()%2;
        fil=rand()%TAM;
        col=rand()%TAM;
        /*int fil, col;
        bool horizontal;
        cin>>fil>>col>>horizontal;*/
        terminar=colocaBarco(m, fil, col, horizontal, 4);
        if(terminar){
            terminar=colocaBarco(m, fil, col, !horizontal, 4);
        }

    }
    for(int i=1;i<=3 && !terminar;i++){
        horizontal=rand()%2;
        fil=rand()%TAM;
        col=rand()%TAM;
        /*int fil, col;
        bool horizontal;
        cin>>fil>>col>>horizontal;*/
        terminar=colocaBarco(m, fil, col, horizontal, 3);
        if(terminar){
            terminar=colocaBarco(m, fil, col, !horizontal, 3);
        }
    }
}
void mostrarTablero (const Tablero& tablero, bool barcos){

    cout<<"  A B C D E F G H I";
    cout<<endl;
    for(int f=0;f<TAM;f++){
        cout<<f<<" ";
        for(int c=0; c<TAM;c++){
            if(tablero[f][c]==BARCO && !barcos){
                cout<<AGUA0<<' ';
            }else{
                cout<<tablero[f][c]<<" ";
            }
            
        }
        cout<<endl;
    }
}
unsigned convertiranum(char col){
    return col-'A';

}
bool pregunta (unsigned& fila, unsigned& columna){
    bool parar=0;
    cout<<"Te riendes? S/N: ";
    char c;
    cin>>c;
    if(c== 'S'){
        parar=1;
    }else if(c=='N'){
        parar=0;
        cout<<"Escribe fila: ";
        cin>>fila;
        cout<<"Escribe columna: ";
        char col;
        cin>>col;
        columna=convertiranum(col);

    }

    return parar;
}
bool disparo(Tablero& m, unsigned fila, unsigned columna){
    bool acierto=0;
    if(m[fila][columna]==BARCO){
        m[fila][columna]=TOCADO;
        acierto=1;
    }else if(m[fila][columna]==AGUA0){
        m[fila][columna]=AGUA;
    }
    return acierto;
}
int main(){
    srand(time(0));
    Tablero m;
    bool terminar=0;
    inicializar(m);
    poner_barcos(m, terminar);
    if(!terminar){
        bool parar=0;
        int puntos=0;
        while(!parar&&puntos!=22){
            unsigned disparof, disparoc;
            mostrarTablero(m,0);
            parar=pregunta(disparof,disparoc);
            if(parar){
                mostrarTablero(m,1);
                cout<<"Buen intento";
            }else{
                bool acierto=disparo(m,disparof, disparoc);
                if(acierto){
                    puntos++;
                }
            }
        }
        if(puntos==22){
            mostrarTablero(m,1);
            cout<<"Enhorabuena, has ganado";
        }
    }else{
        cout<<"Error en la colocacion";
    }
    
    return 0;
}