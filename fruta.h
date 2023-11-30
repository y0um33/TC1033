/*
    Yumee Chung
    A01712059
    30/11/2023
*/

/*
    El clase fruta hereda de clase producto. Tiene su propio objeto cantidad. Guarda la cantidad
    de las frutas y asigna valores a través de getter y setter
*/

#ifndef FRUTA_H
#define FRUTA_H

#include <string>
#include "producto.h"
using namespace std;

class fruta : public producto{ //Clase fruta hereda de público de producto.h
private:
    int cantidad; //objeto cantidad
   
public:
    fruta(): cantidad(0){}; //constructor
    fruta(float pre, string ori, int can): producto(pre,ori), cantidad(can){};

    int get_cantidad(); //Variable para poder mandarlo a Main y llamar lo que está guardado

    void set_cantidad(int); //Variable para poder mandarlo a Main y asignar el valor
    
};

int fruta::get_cantidad(){ //una solicitud de description que está private, acceder
    return cantidad; //return cantidad
}

void fruta::set_cantidad(int can){
    cantidad = can; //Declaración que can es igual a cantidad
};

#endif