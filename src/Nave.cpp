#include "Nave.h"
#include <stdio.h>
Nave::Nave(float x, float y, float z)
{
    condicion=true;
    V[0]=x;
    V[1]=y;
    V[2]=z;
}

Nave::~Nave()
{

}


void Nave::update(float delta, bool izq, bool der,bool adelante, bool atras){

    if(izq){
        V[0] -= velocidad*delta;
    }else{
        if (der){
        V[0] += velocidad*delta;
        }
    }

    if(adelante){
        V[2] -= velocidad*delta;
    }else{
        if(atras){
            V[2] += velocidad*delta;
        }
    }
    //Limites
    if(V[0]<-5){
        V[0]=-5;
    }
    if(V[0]>5){
        V[0]=5;
    }

    if(V[2]<-20){
        V[2]=-20;
    }
    if(V[2]>0){
        V[2]=0;
    }
}

void Nave::muerto(){
    condicion=false;
}

