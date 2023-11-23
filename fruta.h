#ifndef FRUTA_H
#define FRUTA_H

#include <string>
#include "producto.h"
using namespace std;

class fruta : public producto{
private:
    int cantidad;
   
public:
    fruta(): cantidad(0){};
    fruta(float pre, string ori, int can): producto(pre,ori), cantidad(can){};

    int get_cantidad();

    void set_cantidad(int);
    
};

int fruta::get_cantidad(){
    return cantidad;
}

void fruta::set_cantidad(int can){
    cantidad = can;
};

#endif
