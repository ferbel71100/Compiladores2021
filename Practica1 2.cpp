#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

class afd{
    private:
        int no1=0;
        int estados[no1];
        int direccion[no1*2];
        int edofinal[no1];
    public:
        afd(int,int,int);
        void llenarestados();
        void definir();
};

afd::afd(int _no1,int _estados[_no1],int _direccion[_no1*2],int _edofinal[_no1]){
    no1=_no1;
    estados=_estados;
    direccion=_direccion;
    edofinal=_edofinal;
}

void afd::llenarestados(){
    for(int i=0;i<no1;i++){
        estados[i]=i+1;
        cout<<"Este es el estado "<<estado[i]<<endl;
        cout<<"¿Es estado final?, ponga 1 si es así, otro numero si no lo es";
        cin<<edofinal[i];
    }
}

void afd::definir(){
    cout<<"Hay un total de "<<no1<<" estados, a continuacion defina cual sera su direccion en terminos de 0 y 1"<<endl;
    for(int i=0;i<no1;i++){
            int j;
            cout<<"Este es el estado "<<estado[i]<<endl;
            cout<<"¿A donde va cuando es 0?";
            cin<<direccion[j];
            j++;
            cout<<"¿Y cuando es 1?";
            cin<<direccion[j];
            j++;
    }
}

class afn{
    private:
        int no2=0;
        int estados1[no2];
        int direccion1[no2*2];
        int edofinal1[no2];
    public:
        afd(int,int,int);
        void llenarestados1();
        void definir1();
};

afn::afn(int _no2,int _estados1[_no2],int _direccion1[_no2*2],int _edofinal1[_no2]){
    no2=_no2;
    estados1=_estados1;
    direccion1=_direccion1;
    edofinal1=_edofinal1;
}

void afn::llenarestados2(){
    for(int i=0;i<no2;i++){
        estados1[i]=i+1;
        cout<<"Este es el estado "<<estado1[i]<<endl;
        cout<<"¿Es estado final?, ponga 1 si es así, otro numero si no lo es";
        cin<<edofinal1[i];
    }
}

void afn::definir(){
    cout<<"Hay un total de "<<no2<<" estados, a continuacion defina cual sera su direccion en terminos de 0 y 1"<<endl;
    for(int i=0;i<no2;i++){
            int j;
            cout<<"Este es el estado "<<estado1[i]<<endl;
            cout<<"¿A donde va cuando es 0?";
            cin<<direccion1[j];
            j++;
            cout<<"¿Y cuando es 1?";
            cin<<direccion1[j];
            j++;
    }
}

int main()
{
    
}