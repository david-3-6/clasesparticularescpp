#include<iostream>
#include <array>
#include <string>
using namespace std;
const int MAX=100;
struct Fecha{
    unsigned dia,mes,ano;
};
struct TProducto{
    unsigned int cod;
    string nombre;
    double precio;
    Fecha fecha;
};
typedef array <TProducto,MAX>Farm;
struct TFarmacia{
    int cant=0;
    Farm farmacia;
};
TProducto leerProducto(){
    TProducto neww;
    cout<<"Escriba el codigo: ";
    cin>> neww.cod;
    cout<<"Escriba el nombre: ";
    cin>> neww.nombre;
    cout<<"Escriba el precio: ";
    cin>> neww.precio;
    cout<<"Escriba la fecha de caducidad: "<<endl<<"Dia: ";
    cin>>neww.fecha.dia;
    cout<<"Mes: ";
    cin>>neww.fecha.mes;
    cout<<"Ano: ";
    cin>>neww.fecha.ano;
    return neww;


}
void escribirProducto(const TProducto &p){
    cout<<"Codigo: "<<p.cod<<endl;
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Precio: "<<p.precio<<endl;
    cout<<"Fecha de caducidad: "<<endl<<"Dia: "<<p.fecha.dia<<endl;
    cout<<"Mes: "<<p.fecha.mes<<endl;
    cout<<"Ano: "<<p.fecha.ano<<endl;
}
void inicializarFarmacia(TFarmacia &f){
    for(int i=0; i<MAX && i<f.cant;i++){
        f.farmacia[i].cod=0;
        f.farmacia[i].nombre="";
        f.farmacia[i].precio=0;
        f.farmacia[i].fecha.ano=0;
        f.farmacia[i].fecha.dia=0;
        f.farmacia[i].fecha.mes=0;
    }
    f.cant=0;
}
bool insertarProducto(TFarmacia &f, const TProducto &p){
    bool cabe=f.cant<MAX;
    if(cabe){
        f.farmacia[f.cant].cod=p.cod;
        f.farmacia[f.cant].nombre=p.nombre;
        f.farmacia[f.cant].precio=p.precio;
        f.farmacia[f.cant].fecha.ano=p.fecha.ano;
        f.farmacia[f.cant].fecha.dia=p.fecha.dia;
        f.farmacia[f.cant].fecha.mes=p.fecha.mes;
        f.cant++;
    }
    return cabe;
}
void listarFarmacia(const TFarmacia &f){
    for(int i=0; i<MAX && i<f.cant;i++){
        escribirProducto(f.farmacia[i]);
    }
}
bool buscarProductoCodigo(const TFarmacia &f,unsigned int codigo, TProducto &p){
    bool encontrado=0;
    int pos=-1;
    for(int i=0; i<MAX && i<f.cant && !encontrado;i++){
        encontrado= codigo==f.farmacia[i].cod;
        if(encontrado){
            pos=i;
        }
    }
    if(encontrado){
        p.cod=f.farmacia[pos].cod;
        p.nombre=f.farmacia[pos].nombre;
        p.precio=f.farmacia[pos].precio;
        p.fecha.ano=f.farmacia[pos].fecha.ano;
        p.fecha.dia=f.farmacia[pos].fecha.dia;
        p.fecha.mes=f.farmacia[pos].fecha.mes;
    }
    return encontrado;

}
bool buscarProductoNombre(const TFarmacia &f,const string &nombre, TProducto &p){
    bool encontrado=0;
    int pos=-1;
    for(int i=0; i<MAX && i<f.cant && !encontrado;i++){
        encontrado= nombre==f.farmacia[i].nombre;
        if(encontrado){
            pos=i;
        }
    }
    if(encontrado){
        p.cod=f.farmacia[pos].cod;
        p.nombre=f.farmacia[pos].nombre;
        p.precio=f.farmacia[pos].precio;
        p.fecha.ano=f.farmacia[pos].fecha.ano;
        p.fecha.dia=f.farmacia[pos].fecha.dia;
        p.fecha.mes=f.farmacia[pos].fecha.mes;
    }
    return encontrado;
}
void borrarProducto(TFarmacia &f, unsigned int codigo){
    int pos=-1;
    for(int i=0;i<MAX && pos<0 && i<f.cant;i++){
        if(f.farmacia[i].cod==codigo){
            pos=i;
        }
    }
    if(pos>=0){
        f.farmacia[pos]=f.farmacia[f.cant-1];
        f.cant--;
    }
}
void listarFarmaciaOrdenada(const TFarmacia &f){
    TFarmacia aux=f;
    for(int i=0;i<MAX && i<f.cant;i++){
        int pos=0;
        string min=aux.farmacia[0].nombre;
        for(int d=0; d<MAX && d<aux.cant; d++){
            if(aux.farmacia[d].nombre<min){
                min=aux.farmacia[d].nombre;
                pos=d;
            }    
        }
        escribirProducto(aux.farmacia[pos]);
        aux.farmacia[pos]=aux.farmacia[aux.cant-1];
        aux.cant--;
    }
}
int main (){
    int selector;
    TProducto nuevo;
    TFarmacia farma;
    do{
        cout<<"Que desea?: "<<"1- Leer producto(1)"<<endl<<"2- Mostrar datos del producto leido(2)"<<endl<<"3- Eliminar todos los productos de la farmacia(3)"<<endl<<"4- Insertar nuevo producto(4)"<<endl<<"5- Listar farmacia (5)"<<endl<<"6- Buscar producto por su codigo(6)"<<endl<<"7- Buscar producto por su nombre(7)"<<endl<<"8- Borrar producto por su codigo(8)"<<endl<<"9- Listar por orden alfabetico(9)"<<endl<<"10- Terminar programa(10)"<<endl;
        cin>>selector;
        if(selector>0){
            if(selector==1){
                nuevo=leerProducto();
            }else if(selector==2){
                escribirProducto(nuevo);
            }else if(selector==3){
                inicializarFarmacia(farma);
            }else if(selector==4){
                nuevo=leerProducto();
                bool cabe=insertarProducto(farma, nuevo);
                if(!cabe){
                    cout<<"No hay mas espacio";
                }
            }else if(selector==5){
                listarFarmacia(farma);
            }else if (selector==6){
                TProducto prod;
                unsigned int codigo;
                cout<<"Introduce codigo: ";
                cin>>codigo;
                bool encontrado=buscarProductoCodigo(farma, codigo, prod);
                if(encontrado){
                    escribirProducto(prod);
                }else{
                    cout<<"El producto no ha sido encontrado";
                }
            }else if (selector==7){
                TProducto produ;
                string nombre;
                cout<<"Introduce nombre: ";
                cin.ignore(100,'\n');
                getline(cin,nombre);
                bool encont=buscarProductoNombre(farma, nombre, produ);
                if(encont){
                    escribirProducto(produ);
                }else{
                    cout<<"El producto no ha sido encontrado";
                }
            }else if(selector==8){
                cout<<"Introduce codigo del producto a eliminar: ";
                unsigned int codi;
                cin>>codi;
                borrarProducto(farma, codi);
            }else if (selector==9){
                listarFarmaciaOrdenada(farma);
            }
        }
        
    }while (selector!=10);
    cout<<"Gracias por usar nuestro programa";
    return 0;
}
