/*
    Yumee Chung 
    A01712059
    30/11/2023

*/

/*
    Clase juego contiene los métodos genéricos para manejar diferentes
    tipos de juegos. Es herencia de producto.h. El variable del JUEGO_H 
    es string description para poner descripción de los juegos
*/

#ifndef JUEGO_H
#define JUEGO_H

#include <string>
#include "producto.h"
using namespace std;

//Declaración de clase game y que utiliza el public del clase producto
class game : public producto{
private:
    string description; //Declaro variables description

public:
    //Declaración de los métodos que va a tener el objeto
    game(): description(""){}; //constructor
    game(float pre, string ori, string des): producto(pre,ori), description(des){};

    string get_description();

    void set_description(string);
};

string game::get_description(){ //una solicitud de description que está private, acceder
    return description; //return description
}

void game::set_description(string des){ //para guardar el valor 
    description = des; //variable obtenido en des guarda como description
};

#endif
