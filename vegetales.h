#ifndef VEGETALES_H
#define VEGETALES_H

#include <string>
#include "producto.h"
using namespace std;

class vegetal : public producto{
private:
    int value;

public:
    vegetal(): value(0){};
    vegetal(float pre, string ori, int va): producto(pre,ori), value(va){};

    int get_value();

    void set_value(int);
};

int vegetal::get_value(){
    return value;
}

void vegetal::set_value(int va){
    value = va;
};

#endif

