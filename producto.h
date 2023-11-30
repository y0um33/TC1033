/*
    Yumee Chung
    A01712059
    30/11/2023
*/

/*
    El clase producto es la herencia, el padre de los clases: vegetales, frutas y juegos. Contiene
    objeto precio y origen. Utilizando getter y setter.
*/

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class producto{ //Declaración del clase
private:
    float precio; //objeto precio 
    string origen; //objeto origen
public:
    producto(): precio(0.0), origen(""){}; //constructor
    producto(float pre, string ori): precio(pre), origen(ori){};

    //Variable para poder mandarlo a Main y llamar lo que está guardado
    float get_precio(); 
    string get_origen(); 

    //Variable para poder mandarlo a Main y asignar el valor
    void set_precio(float);
    void set_origen(string);
};

//una solicitud de producto que está private, acceder
float producto::get_precio(){
    return precio;
}

string producto::get_origen(){
    return origen;
}

//para guardar el valor 
void producto::set_precio(float pre){
    precio = pre;
}

void producto::set_origen(string ori){
    origen = ori;
}

#endif