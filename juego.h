#ifndef JUEGO_H
#define JUEGO_H

#include <string>
#include "producto.h"
using namespace std;

class game : public producto{
private:
    string description;

public:
    game(): description(""){};
    game(float pre, string ori, string des): producto(pre,ori), description(des){};

    string get_description();

    void set_description(string);
};

string game::get_description(){
    return description;
}

void game::set_description(string des){
    description = des;
};

#endif
