/*
    Yumee Chung
    A01712059
    30/11/2023
*/

/*
    El clase vegetales hereda de clase producto. Tiene su propio objeto cantidad. Guarda la cantidad
    de las vegetales y asigna valores a través de getter y setter
*/

#ifndef VEGETALES_H
#define VEGETALES_H

#include <string>
#include "producto.h"
using namespace std;

class vegetal : public producto{ //clase vegetal hereda de público de producto
private:
    int value; //objeto de value

public:
    vegetal(): value(0){}; //constructor 
    vegetal(float pre, string ori, int va): producto(pre,ori), value(va){};

    int get_value(); //Variable para poder mandarlo a Main y llamar lo que está guardado

    void set_value(int); //Variable para poder mandarlo a Main y asignar el valor
};

int vegetal::get_value(){ //una solicitud de value que está private, acceder
    return value; //return value
}

void vegetal::set_value(int va){
    value = va; //Declaración que va es igual a value
};

#endif