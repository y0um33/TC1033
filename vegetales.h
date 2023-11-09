#include <string>
using namespace std;

class vegetal{
private:
    int value;
    string mes;
    int yar;
    int di;

public:
    vegetal(): value(0), mes(""), yar(0), di(0){};
    vegetal(int va, string me, int ya, int dy): value(va), mes(me), yar(ya), di(dy){};

    int get_value();
    string get_mes();
    int get_yar();
    int get_di();

    void set_value(int);
    void set_mes(string);
    void set_yar(int);
    void set_di(int);
};

int vegetal::get_value(){
    return value;
}
string vegetal::get_mes(){
    return mes;
}
int vegetal::get_yar(){
    return yar;
}

int vegetal::get_di(){
    return di;
}

void vegetal::set_value(int va){
    value = va;
};

void vegetal::set_mes(string me){
    mes = me;
};

void vegetal::set_di(int dy){
    di = dy;
};

void vegetal::set_yar(int ya){
    yar = ya;
};

