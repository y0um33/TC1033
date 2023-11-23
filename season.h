#ifndef SEASON_H
#define SEASON_H

#include <string>
using namespace std;

class season{
private: 
    string period;
public:
    season(): period(""){};
    season(string per): period(per){};

    string get_period();
    void set_period(string);
};

string season::get_period(){
    return period;
}

void season::set_period(string per){
    period = per;
}


#endif
