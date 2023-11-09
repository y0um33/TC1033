#include <string>
using namespace std;

class fruta{
private:
    int cantidad;
    string month;
    int year;
    int day;

public:
    fruta(): cantidad(0), month(""), year(0), day(0){};
    fruta(int can, string m, int y, int d): cantidad(can), month(m), year(y), day(d){};

    int get_cantidad();
    string get_month();
    int get_year();
    int get_day();

    void set_cantidad(int);
    void set_month(string);
    void set_year(int);
    void set_day(int);
};

int fruta::get_cantidad(){
    return cantidad;
}
string fruta::get_month(){
    return month;
}
int fruta::get_year(){
    return year;
}

int fruta::get_day(){
    return day;
}

void fruta::set_cantidad(int can){
    cantidad = can;
};

void fruta::set_month(string m){
    month = m;
};

void fruta::set_day(int d){
    day = d;
};

void fruta::set_year(int y){
    year = y;
};
