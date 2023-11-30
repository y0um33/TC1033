/*
    Yumee Chung
    A01712059
    30/11/2023
*/

/*
    clase discount es composición de season.h. El clase está dentro del clase. Tiene los variables
    de season.
*/

#ifndef DESCUENTO_H
#define DESCUENTO_H
#include "season.h"
using namespace std;

class discount{ //Declaración del class discount
private:
    string number;
    season Season; //Declarando un objeto del clase season
public:
    discount(): number(""){}; //constructor
    discount(string num, string period) : Season(period), number(num){};

    season get_Season(){ //Declarando una función getter de clase season
        return Season;
    }

    string get_number();

    void set_number(string);

};

string discount::get_number(){ //una solicitud de description que está private, acceder
    return number;
}

void discount::set_number(string num){ //para guardar el valor
    number = num; ////variable obtenido en num guarda como number
};

#endif
