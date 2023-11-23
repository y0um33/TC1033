#ifndef DESCUENTO_H
#define DESCUENTO_H
#include "season.h"
using namespace std;

class discount{
private:
    string number;
    season Season;
public:
    discount(): number(""){};
    discount(string num, string period) : Season(period), number(num){};

    season get_Season(){
        return Season;
    }

    string get_number();

    void set_number(string);

};

string discount::get_number(){
    return number;
}

void discount::set_number(string num){
    number = num;
};

#endif
