#include<iostream>
using namespace std;
void lectura(int& n){
    cout<<"Introduzca numero de filas: ";
    cin>>n;
}
void construccion1 (int n){
    int cont=1;
    int cont1;
    for(int f=1; f<=n;f++){
        for(int i=1; i<=n-f;i++){
            cout<<" ";
        }
        cont1=f;
        if(cont1>=10){
            cont1-=10;
        }
        for(int num=1; num<=cont;num++){

            cout<<cont1;
            if(num!=cont){
                cont1++;
            }

            if(cont1>=10){
                cont1=0;
            }

        }
        for(int num=cont-1;num>=1;num--){

                cont1--;
                if(cont1<0){
                    cont1+=10;
                }
                cout<<cont1;
                if(cont1>=10){
                    cont1=0;
                }
        }
        cout<<endl;
        cont++;
    }

}


int main (){
    int n;
    lectura(n);
    construccion1 (n);
}
