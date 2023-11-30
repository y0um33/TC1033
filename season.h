/*
    Yumee Chung
    A01712059
    30/11/2023
*/

/*
    El clase season se hace para guardar y acceder a diferente periodo. El clase se
    va ser composionado en descuento.h para acceder al periodo. 
*/

#ifndef SEASON_H
#define SEASON_H

#include <string>
using namespace std;

class season{
private: 
    string period; //objeto period
public:
    season(): period(""){}; //constructor
    season(string per): period(per){};

    string get_period(); //Variable para poder mandarlo a Main y llamar lo que está guardado
    void set_period(string); //Variable para poder mandarlo a Main y asignar el valor
};

string season::get_period(){
    return period; //return period (string)
}

void season::set_period(string per){
    period = per;
}


#endif
